#include <stdio.h>
#include<limits.h>
void fun(int);
void main(){
//int a =  5 ;
//a=printf("Good")+printf("Boy");
//printf("%d",a);       //op  GoodBoy7
//-------------------------------------------------

//printf("%x",-1<<4);

//int a = 5 , b = 3 ;
//printf("%d",++(a*b+1));   //  compiler-time Error
//--------------------------------------------------

//int a = 5 ;
//a = printf("welcome");
//printf("%d",a);       //welcome7

//char ch = 'A';
//ch = ch+1;
//printf("%c",ch);      //'B'

//float c = 3.14;
//printf("%f",c%2);     //compile-time Error

//int a , b ,c ;
//a = b = 4 ;
//c = a == b ;
//printf("%d",c);       //1

//int i = 10 ;
//i = !i > 14 ;
//printf("%d",i);       //0

//int i ;
//i = 10 + 010 + 0x20 ;
//printf("%d",i);        //50

//int x ;
//x = ++2;        //compile-time Error
//printf("%d",x);

//int x =20;
//x *= 30 + 5;
//printf("%d",x);       //700

//static int i ;
//int j ;
//printf("%d\n",i);     //0
//printf("%d",j);   //0

//int a = 53 ;
//printf("\n a = %o 20",a);       //65

//int s ;
//s = square(5+1);               //5+ 1*5 +1
//printf("%d",s);         //11

/*int i = 4 ;
switch(i)
{
default:
    printf("oracle\n");
case 1 :
    printf("c\n");
    break;
case 2 :
    printf("c++\n");
    break;
case 3 :
    printf("java \n");
}*/                             //oracle \n c


//printf("%d",USHRT_MAX);         //65535


//int a = 7 ;
//a = ++a + ++a + ++a + ++a + a++;
//printf("a : %d\n",a);         //50

//int a = 5 ;
//a = ++a + ++a ;
//printf("a : %d\n",a);     //14


//int i = 2, j = 2;
//while(i+1 ? --i :--j)
//{
//    printf("%d\n",i);     // i = 1
//}


/*int x = 3 ;
int y = 3 ;
while(--x && --y )
{
    printf("%d ,%d \n",x ,y);
}*/                                     //2 ,2 \n 1 ,1

/*char x = 120 ;
while(++x > 0)
{
    printf("%d\t",x);
}*/                             //120 121 122 123 124 125 126 127

//int a = 4 , b = 5 ;
//b = a++ + a-- ;
//a = ++b + b-- ;
//printf("%d,%d",a,b);              // ?

//int a = 35 ,b = 15 ,c = 25 , d , e ;
//d = a > c > b ;
//e = c - b > a <= d ;
//printf("%d %d ",d,e);         //0 1

/*if(!!7)
    printf("hi\n");
else
    printf("hello\n");
    printf("Bye\n");*/          //hi \n Bye

//int x = 5 , y = 0 , a ,b ;
//a = ++y || ++x ;
//b = --y && ++x ;
//printf("%d %d %d %d\n",x,y,a,b);      // 5 0 1 0

//int x ;
//x = 4%5 == 4%2 + 3;
//printf("x = %d",x);     //x = 0

/*int a = 3 , b = 4 , c = 5;
if(a>b)
if(a>c)
printf("hi\n");
else
printf("hello");*/          //Nothing will be Print

//int x = 3;
//fun(x++);             //x = 3

//char sport[] = "cricket";
//int x = 1 , y;
//y = x++ + ++x;
//printf("%c",sport[++y]);      // e


abc(3);         //32100123


}
void fun(int x){
printf("x value :%d\n",x++);
}
void abc(int a){
printf("%d",a);
if(a){
    abc(a-1);
}
printf("%d",a);

}

