#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7
//int reval(int val);//объявили функцию
//void fill(int *array,int size);
void printArray(int *array,int size);
void fillRandom(int *array,int size);
void bublesort(int *array, int size);


//Кадр функции(фрейм):Аргумент ,локальные переменные ,возвращаемое значение , адрес возврата.
//Адресное пространство процесса: 
//СТЕК это там где на время выполнения хранятся функции
//heap(куча):Динамический сегмент
//bss:Сегмент неиницилизированных переменных(Глобал. , локал.)
//data:Сегмент иницилизированных переменных(Глобал. , локал.)
//text:Машинный код программмы

//exit(EXIT_SUCCESS) (#include <stdlib.h>)-возвращаемое значение main
//static int b = 6;
//static double c; //global переменная
//static переменная в 1 файле
//const неизменяемая переменная

// int main(void) //void-нет аргументов
// {
//     int a; // local переменная
//     int a = retval(6);

//     int massOne[SIZE] = {0};
//     int *massTwo = (int *)calloc(SIZE , sizeof(int));
    
//     fill(massOne,SIZE);
//     //потому что massOne - указатель на ф-ию
//     printArray(massOne,SIZE);

//     fill(massTwo,SIZE);
//     printArray(massTwo,SIZE);
//     //calloc - выделяет память и заполняет нулями
//     //malloc - выделяет память 
//     //realloc - изменить размер
//     //free - очистить память
//     //int *array = (int *)calloc(100,sizeof(int));
//     //calloc - возвращаемое значение void *
//     // 100 - сколько выделили ячеек
//     //sizeof(int) - какого размера ячейки
    
//     // for(int i = 0;i < 100;++i)
//     // {
//     //     scanf("%d",&array[i]);
//     // }
    
//     // if(a != b)
//     // {
//     //     int n = a; //int n блочная переменная
//     // }
//     exit(EXIT_SUCCESS);
// }

// int retval(int val)
// {

    
    
//     return val;
// }
// int main(void)
// {
//     int massOne[SIZE] = {0};
//     int *massTwo = (int *)calloc(SIZE , sizeof(int));
    
//     fill(massOne,SIZE);
//     fill(massTwo,SIZE);

//     printArray(massOne,SIZE);
//     printArray(massTwo,SIZE);
//     free(massTwo);
//     exit(EXIT_SUCCESS);

// }

// void fill(int *array, int size)
// {
//     printf("Введите %d элементов : \n",size);
//     for(int i = 0;i<size;++i)
//     {
//         printf("array[%d]=",i);
//         scanf("%d",&array[i]);
//     }
// }
// void printArray(int *array,int size)
// {
//     printf("\nМассив: \n");
//     for(int i = 0;i < SIZE;++i)
//     {
//         printf("array[%d] = %d \n",i,array[i]);
//     }
// }
// int main(void)
// {
//     int massOne[SIZE] = {0};
//     int *massTwo = (int *)calloc(SIZE , sizeof(int));
    
//     fillRandom(massOne,SIZE);
//     fillRandom(massTwo,SIZE);

//     printArray(massOne,SIZE);
//     printArray(massTwo,SIZE);
// }

// void fillRandom(int *array,int size)
// {
//     srand(time(NULL));
//     //a + rand() % (b - a + 1)
//     //NULL - ничего

//     for(int i = 0;i < size;++i)
//     {
//         array[i] = 0 + rand() % (size - 0 + 1);

//     }

// }
// void printArray(int *array,int size)
// {
//     printf("\nМассив: \n");
//     for(int i = 0;i < SIZE;++i)
//     {
//         printf("array[%d] = %d \n",i,array[i]);
//     }
// }


//СОРТИРОВКА
int main(void)
{
    int massOne[SIZE] = {0};
    int *massTwo = (int *)calloc(SIZE , sizeof(int));
    
    fillRandom(massOne,SIZE);
    fillRandom(massTwo,SIZE);

    printArray(massOne,SIZE);
    printArray(massTwo,SIZE);

    bublesort(massOne,SIZE);
    bublesort(massTwo,SIZE);

    printArray(massOne,SIZE);
    printArray(massTwo,SIZE);


}
void fillRandom(int *array,int size)
{
    srand(time(NULL));
    //a + rand() % (b - a + 1)
    //NULL - ничего

    for(int i = 0;i < size;++i)
    {
        array[i] = 0 + rand() % (size - 0 + 1);

    }
}
void bublesort(int *array, int size)
{
    for(int i = 0;i < size - 1;++i)
    {
        for(int j = 0;j < size - 1 -i;++j)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        
    }

}
void printArray(int *array,int size)
{
    printf("\nМассив: \n");
    for(int i = 0;i < SIZE;++i)
    {
        printf("array[%d] = %d \n",i,array[i]);
    }
}
