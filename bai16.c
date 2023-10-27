#include  <stdio.h>
#include <math.h>

float Sum(int n, float x)
{
    float sum = x;
    int temp = 1;
    for(int  i = 2; i <= n; i++)
    {
        temp += i;
        sum += pow(x, i) / temp;

    }
    return sum;
}

int main()
{
    int n = 0;
    float x = 0.0f;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Tong la: %.2f", Sum(n, x));
    return 0;
}