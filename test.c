#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i = 0;
    double tmp = 0;

    double sum1 = 0;
    double sum2 = 0;

    int SIZE2 = SIZE + SIZE;
    
    double mass1[SIZE];
    double mass2[SIZE];
    double mass3[SIZE2];

    // double sum[SIZE];
    // double sred[SIZE];
   
 
    for(i = 0;i < SIZE;i++)
    {
        scanf("%lf",&mass1[i]);
    }

    for(i = 0;i <= SIZE - 1;i++)
    {
        printf("%lf ",mass1[i]);
    }
    printf("\n");

    for(i = 0;i <= SIZE - 1;i++)
    {
        scanf("%lf",&mass2[i]);
    }

    for(i = 0;i <= SIZE - 1;i++)
    { 
        printf("%lf ",mass2[i]);
    }
    //  
    for(i = 0;i <= SIZE - 1;i++)
    {
        sum1 += mass1[i];
    }
    printf("\nСумма элементов 1 массива = %lf \n",sum1);
    for(i = 0;i <= SIZE - 1;i++)
    {
        sum2 += mass2[i];
    }
      printf("\nСумма элементов 2 массива = %lf \n",sum2);
   

    printf("\nСред. ариф. значение элементов 1 массива = %lf \n", sum1 / SIZE);
    printf("\nСред. ариф. значение элементов 2 массива = %lf \n", sum2 / SIZE);
    printf("\n");
    printf("Обратный массив№1 -- ");
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


    printf("\nОбъединение массивов в 1\n");
    int k = 0;
    for(i = 0; i < SIZE;++i)
    {
        mass3[k] = mass1[i];
        ++k;
    }
    printf("k = %d\n", k);

    for(i = 0; i < SIZE ;++i)
    {
        
        mass3[k] = mass2[i];
        ++k;
    }

    for(i = 0;i < SIZE2 ; i++)
    {
        printf(" %lf ",mass3[i]);
    }
    
}