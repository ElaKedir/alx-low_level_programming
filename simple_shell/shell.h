#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

/* for read/write buffers */
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

/* for command chaining */
#define CMD_NORM	0
#define CMD_OR		1
#define CMD_AND		2
#define CMD_CHAIN	3

/* for _itoa() */
#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

/* 1 if using system getline() */
#define USE_GETLINE 0
#define USE_STRTOK 0

#define HIST_FILE	".simple_shell_history"
#define HIST_MAX	4096

extern char **environ;


/**
 * struct liststr - singly linked list
 * @num: the number field
 * @str: a string
 * @next: points to the next node
 */
typedef struct liststr
{
	int num;
	char *str;
	struct liststr *next;
} list_t;

/**
 *struct passinfo - contains pseudo-arguments to pass into a function,
 *		allowing uniform prototype for function pointer struct
 *@arg: a string generated from getline containing arguments
 *@argv: an array of strings generated from arg
 *@path: a string path for the current command
 *@argc: the argument count
 *@line_count: the error count
 *@err_num: the error code for exit()s
 *@linecount_flag: if on count this line of input
 *@fname: the program filename
 *@env: linked list local copy of environ
 *@environ: custom modified copy of environ from LL env
 *@history: the history node
 *@alias: the alias node
 *@env_changed: on if environ was changed
 *@status: the return status of the last exec'd command
 *@cmd_buf: address of pointer to cmd_buf, on if chaining
 *@cmd_buf_type: CMD_type ||, &&, ;
 *@readfd: the fd from which to read line input
 *@histcount: the history line number count
 */
typedef struct passinfo
{
	char *arg;
	char **argv;
	char *path;
	int argc;
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *history;
	list_t *alias;
	char **environ;
	int env_changed;
	int status;

	char **cmd_buf; /* pointer to cmd ; chain buffer, for memory mangement */
	int cmd_buf_type; /* CMD_type ||, &&, ; */
	int readfd;
	int histcount;
} ela_info;

#define INFO_INIT \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
	0, 0, 0}

/**
 *struct builtin - contains a builtin string and related function
 *@type: the builtin command flag
 *@func: the function
 */
typedef struct builtin
{
	char *type;
	int (*func)(ela_info *);
} builtin_table;


/* toem_shloop.c */
int hsh(ela_info *, char **);
int find_builtin(ela_info *);
void find_cmd(ela_info *);
void fork_cmd(ela_info *);

/* toem_parser.c */
int is_cmd(ela_info *, char *);
char *dup_chars(char *, int, int);
char *find_path(ela_info *, char *, char *);

/* loophsh.c */
int loophsh(char **);

/* toem_errors.c */
void e_puts(char *);
int error_putchar(char);
int put_fd(char c, int fd);
int put_fds(char *str, int fd);

/* toem_string.c */
int _strlen(char *);
int _strcmp(char *, char *);
char *starts_with(const char *, const char *);
char *_strcat(char *, char *);

/* toem_string1.c */
char *_strcpy(char *, char *);
char *_strdup(const char *);
void _puts(char *);
int _putchar(char);

/* toem_exits.c */
char *ela__strncpy(char *, char *, int);
char *ela_strncat(char *, char *, int);
char *ela__strchr(char *, char);

/* toem_tokenizer.c */
char **strtow(char *, char *);
char **strtow2(char *, char);

/* toem_realloc.c */
char *_memset(char *, char, unsigned int);
void ffree(char **);
void *_realloc(void *, unsigned int, unsigned int);

/* toem_memory.c */
int bfree(void **);

/* toem_atoi.c */
int from_pipe(ela_info *);
int is_dlmtr(char, char *);
int _isalpha(int);
int _atoi(char *);

/* toem_errors1.c */
int er_stoi(char *);
void print_err(ela_info *, char *);
int print_decimal(int, int);
char *_itoa(long int, int, int);
void remove_comments(char *);

/* toem_builtin.c */
int ela_exit(ela_info *);
int _mycd(ela_info *);
int ela_help(ela_info *);

/* toem_builtin1.c */
int ela_history(ela_info *);
int ela_alias(ela_info *);

/*toem_getline.c */
ssize_t get_input(ela_info *);
int _getline(ela_info *, char **, size_t *);
void sigintHandler(int);

/* toem_getinfo.c */
void clear_ela_info(ela_info *);
void set_ela_info(ela_info *, char **);
void free_ela_info(ela_info *, int);

/* toem_environ.c */
char *ela_getenv(ela_info *, const char *);
int ela_environ(ela_info *);
int elaela__setenv(ela_info *);
int elaela_unsetenv(ela_info *);
int populate_envlist(ela_info *);

/* toemela_getenv.c */
char **ela_get_env(ela_info *);
int ela_unsetenv(ela_info *, char *);
int ela__setenv(ela_info *, char *, char *);

/* toem_history.c */
char *get_history_file(ela_info *info);
int write_history(ela_info *info);
int read_history(ela_info *info);
int build_history_list(ela_info *info, char *buf, int linecount);
int renumber_history(ela_info *info);

/* toem_lists.c */
list_t *add_node(list_t **, const char *, int);
list_t *add_node_end(list_t **, const char *, int);
size_t print_list_str(const list_t *);
int delete_node_at_index(list_t **, unsigned int);
void free_list(list_t **);

/* toem_lists1.c */
size_t list_len(const list_t *);
char **list_to_strings(list_t *);
size_t print_list(const list_t *);
list_t *node_starts_with(list_t *, char *, char);
ssize_t get_node_index(list_t *, list_t *);

/* toem_vars.c */
int is_chain(ela_info *, char *, size_t *);
void check_chain(ela_info *, char *, size_t *, size_t, size_t);
int replace_alias(ela_info *);
int replace_vars(ela_info *);
int replace_string(char **, char *);

#endif
