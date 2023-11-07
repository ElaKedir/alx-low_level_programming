#include <stdio.h>

int main()
{
    char s1[30] = "this are great days";
    int i;

    for(i = 0; s1 !='\0'; i++)
    {
        if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] = s1[i] - 32;
        }
        else
        {
          s1[i] = s1[i];
        }
            printf("%c", s1[i]);
    }
}
