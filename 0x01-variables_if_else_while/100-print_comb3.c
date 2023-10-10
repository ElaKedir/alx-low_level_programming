#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int combinationnumber = 0;
    int totalcombinations = 45;

    for(i = 0; i <= 9; i++)
    {
        for(j = 0; j <= 9; j++)
        {
            if(i < j)
            {
                putchar(i + '0');
                putchar(j + '0');

                combinationnumber++;
                if (combinationnumber < totalcombinations)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    return 0;
}