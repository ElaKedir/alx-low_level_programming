#include <stdio.h>
#include <string.h>

void rev_string(char *s);

int main(void)
{
    char s[] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return 0;
}

void rev_string(char *s)
{
    int length = strlen(s);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}