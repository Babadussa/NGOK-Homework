#include <stdio.h>
#define SIZE 5
char perevod(unsigned int a);
void zaglav(char * simbol); 
void stroch(char * simbol); 
void swap(int * a, int * b); 
int sum(int * a, int * b); 
int sub(int * a, int * b); // a-b
double mult (double * a,double * b); //a*b 
float dev(float * a,float * b); //a/b
void mass(void);// Массив[5] 
int main(void) 
{
    int a = 0;
    int b = 0;
    int c = 0,d = 0;
    double gh = 0,hj = 0;
    float kj = 0,jk = 0;
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%lf",&hj);
    scanf("%lf",&gh);
    scanf("%f",&kj);
    scanf("%f",&jk);
    swap(&c,&d);
    printf("Смена переменных === %d %d \n", d , c);
    char f = 'f';
    zaglav(&f);
    printf("Перевод из строчной в заглавную === %c \n",f);
    char n = 'N';
    stroch(&n);
    printf("Перевод из заглавной в строчную === %c \n",n);
    char provod = perevod('Z');
    printf("Перевод из заглавной в строчную и наоборот === %c \n",provod);
    
    sum(&c,&d);
    int rezult = sum(&c,&d);
    printf("Сумма двух переменных === %d \n",rezult);

    sub(&c,&d);
    int razn = sub(&c,&d);
    printf("Разность двух переменных === %d \n",razn);

    mult(&gh,&hj);
    double ymnoj = mult(&gh,&hj);
    printf("Умножение двух переменных === %lf \n",ymnoj);

    dev(&kj,&jk);
    float delen = dev(&kj,&jk);
    printf("Деление двух переменных === %f \n",delen);

    mass();

}
char perevod(unsigned int a)
{
    char provod = 0;
    if('a' <= a && a <= 'z')
    {
        provod = a - 32;
    }
    else if( 'A' <= a && a <= 'Z')
    {
        provod = a + 32;
    }
    return provod ;
}
void zaglav(char * simbol)
{
    if('a' <= * simbol && * simbol <= 'z')
    {     
        * simbol -= 32;
    }

}
void stroch(char * simbol)
{
    if('A' <= * simbol && * simbol <= 'Z')
    {     
        * simbol += 32;
    }
}
void swap(int * a, int * b)
{
    int klop = 0;
    klop == *a;
    * a == * b;
    * b == klop;
    
}
int sum(int * a, int * b)
{
    int sum = * a + * b;
    return sum;
}
int sub(int * a, int * b)
{
    int sub = * a - * b;
    return sub;
}
double mult (double * a,double * b) //a*b
{
    double ymnoj = *a * *b;
    return ymnoj;
}
float dev(float * a,float * b)
{
    float delen = * a / * b;
    return delen;
}
void mass(void)
{
    int ar[SIZE];
    
    for( int i = 0;i < SIZE;i++)
    {
        scanf("%d",&ar[i]);
    }
        for( int i = 0;i < SIZE;i++)
    {
        printf("%d ",ar[i]);
    }
}















