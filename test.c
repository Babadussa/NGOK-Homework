#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i = 0;
    double mass1[SIZE];
    double mass2[SIZE];
    double mass3[SIZE];
    double sum[SIZE];
    double sred[SIZE];
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
    for(i = 0;i <= SIZE - 1; i++)
    {
        if(mass1[i] %2 = 0)
        {
            s += 1;
        }
    }

}