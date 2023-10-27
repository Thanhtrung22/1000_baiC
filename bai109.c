#include <stdio.h>

void In_Bang_Cuu_Chuong()
{
    for(int i = 1; i <= 9; i++)
    {
        printf("BANG NHAN %d\t", i);
    }
    printf("\n");
    for(int i = 1; i <= 9; i++)
    {
        for(int j = 1; j <= 9; j++)
        {
            printf("%d x %d = %d\t", j, i, i * j);
        }
        printf("\n");
    }
}
int main()
{
    In_Bang_Cuu_Chuong();
    return 0;
}