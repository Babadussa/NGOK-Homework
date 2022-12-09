#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i = 0;
    int j = 0;
    double tmp = 0;
    double mass1[SIZE];
    double mass2[SIZE];
    double mass3[SIZE];
    double sum[SIZE];
    double sred[SIZE];
    int s = 0;
    int m = 0;
    for(i = 0;i <= SIZE - 1;i++)
    {
        scanf("%lf",&mass1[i]);
    }
    for(i = 0;i <= SIZE - 1;i++)
    {
        printf("%lf ",mass1[i]);
    }
    for(i = 0;i <= SIZE - 1;i++)
    {
        scanf("%lf",&mass2[i]);
    }
    for(i = 0;i <= SIZE - 1;i++)
    { 
        printf("%lf ",mass2[i]);
    }
    for(i = 0;i <= SIZE - 1;i++)
    {
        sum[i] += mass1[i];
        sum[i] += mass2[i];
    }
    printf("\nСумма элементов массивов \n");
    for(i = 0;i <= SIZE - 1;i++)
    {
        printf("%lf ",sum[i]);
    }
    for(i = 0;i <= SIZE - 1;i++)
    {
        sred[i] += mass1[i];
        sred[i] += mass2[i];
        sred[i] /= 2;
    }
    printf("\nСред. ариф. значение элементов массивов \n");
    for(i = 0;i <= SIZE - 1;i++)
    {
        printf("%lf ",sred[i]);
    }
    printf("\n");
    for(int i = 0,j = SIZE - 1 ;i < SIZE / 2; ++i , --j )
    {
        tmp = mass1[i];
        mass1[i] = mass1[j];
        mass1[j] = tmp;
    }
    for(i = 0;i < SIZE;i++)
    {
        printf("%lf ",mass1[i]); 
    }
    printf("\nОбъединение массивов в 1 массив \n");
    int SIZE2 = SIZE + SIZE;
    for(i = 0,j < SIZE; i < SIZE2 /2,j >= 0;i++,j--)
    {
        mass3[i] = mass1[j];
    }
    for(i < SIZE2,j = 0;i >= SIZE2 /2,j < SIZE;i--,j++)
    {
        mass3[i] = mass2[j];
    }
    for(i = 0;i < SIZE2 ; i++)
    {
        printf("%lf ",mass3[i]);
    }
}