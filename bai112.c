#include <stdio.h>

void In_Hinh_Chu_Nhat_Dac(int dai, int rong)
{
    for(int i = 0; i < rong; i++)
    {
        for(int j = 0; j < dai; j++)
        {
            printf("%-3c", '*');
        }
        printf("\n");
    }
}

void In_Hinh_Chu_Nhat_Rong(int dai, int rong)
{
    for(int i = 0; i < rong; i++)
    {
        for(int j = 0; j < dai; j++)
        {
            if(i == 0 || j == 0 || j == dai - 1 || i == rong - 1)
            {
                printf("%-3c", '*');
            }
            else
            {
                printf("%-3c", 32);
            }

        }
        printf("\n");
    }
}

int main()
{
    In_Hinh_Chu_Nhat_Dac(7, 4);
    printf("\n");
    In_Hinh_Chu_Nhat_Rong(7, 4);
    return 0;
}