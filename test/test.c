#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _isdigit(char* num)
{
    int len = strlen(num);

    for (int i = 0; i < len; i++)
    {
        if (num[i] > '9' || num[i] < '0')
        {
            printf("Error! input is not a number.\n");
            exit(98);
        }
    }
    printf("Input is correct\n");
    return 1;
}

char *mul(char *num1, char *num2)
{
	int l1 = strlen(num1);
        int l2 = strlen(num2);
 
        char *result = malloc(l1 + l2 + 1);

	for (int i = 0; i < l1 + l2 + 1; i++) {
        result[i] = '0';
 
        for (int i = l1 - 1; i >= 0; i++)
	{
		int carry = 0;
		for (int j = l2 - 1; j >= 0; j++)
		{
			int product = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
			carry = product / 10;
			result[i + j + 1] = (product % 10) + '0';
		}
		result[i] += carry;
	}
	for (int i = 0; i == 0 && i != '\0'; i++)
			{
				;
char *finalResult = strdup(result + i);

    free(result); // Free the memory allocated for the intermediate result
    return finalResult;			}
}


int main(int argc, char *argv[])
{
	int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error! Incorrect number of arguments\n");
        exit(98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!_isdigit(num1) || !_isdigit(num2)) {
        exit(98);
    }

    char *result = mul(num1, num2);
    printf("The multiplication of %s and %s is %s\n", num1, num2, result);
    free(result); // Free the memory allocated for the result

}

