#include <stdio.h>

void In_Tam_Giac_Can_Dac(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            printf("%-2c", 32);
        }
        for(int k = 0; k < 2 * i + 1; k++)
        {
            printf("%-2c", '*');
        }
        printf("\n");
    }
}
void In_Tam_Giac_Can_Rong(int n )
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            printf("%-2c", 32);
        }
        for(int k = 0; k < 2 * i + 1; k++)
        {
            if(k == 0 || k == 2 * i || i == n -1)
            {
                printf("%-2c", '*');
            }
            else
            {
                printf("%-2c", 32);
            }
        }
        printf("\n");
    }
}
void In_Tam_Giac_Vuong_Can_Dac(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j <= i)
            {
                printf("%-2c", '*');
            }
            else
            {
                printf("%-2c", 32);
            }
        }
        printf("\n");
    }
}

void In_Tam_Giac_Vuong_Can_Rong(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == i || j == 0 || i == n - 1)
            {
                printf("%-2c", '*');
            }
            else
            {
                printf("%-2c", 32);
            }
        }
        printf("\n");
    }
}
int main()
{
    In_Tam_Giac_Can_Dac(4);
    printf("\n");
    In_Tam_Giac_Can_Rong(4);
    printf("\n");
    In_Tam_Giac_Vuong_Can_Dac(4);
    printf("\n");
    In_Tam_Giac_Vuong_Can_Rong(6);
    return 0;
}