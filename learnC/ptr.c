#include <stdio.h>
union un
{
    short int a ;
    char ch[2];
} ;
void fun(void);
void fun(void){
static int a = 5;
printf("a : %d\n",a+=2);
}


void main(){
/*int arr[5] = {10,20,30,40,50};
int *ptr;
ptr = arr;
printf("%u\n",*++ptr + 3);
printf("%u\n",*(ptr-- + 2) + 5);
printf("%u\n",*(ptr + 3)-10);*/         //23 45 30

//int i = 1 ;
//while(i++ <= 12);   //<= look at the semi colon
//{
 //   printf("i : %d",i);
//}                         //14

/*int i = 6;
for(--i;--j;i--)
{
    printf("%d",i);
}*/             //compiler error

/*union un u ;
u.ch[0] = 2;
u.ch[1] = 3;
printf("a : %d\n",u.a);             //770
*/

//char *str = "nareshit";
//printf("%c\n",*((str-- + 2)+1)-3);
//printf("%c\n",*(--str+3)-32);
//printf("%c\n",*(++str+2)+4);

/*int i = 100;
int *ip1 , *ip2;
ip1 = &i;
ip2 = ++ip1;
--ip1;
printf("%u",ip2-ip1);*/         //1


//fun();    //7
//fun();    //9
//fun();    //11


//int a = 5 ;
//a = a+++a;
//printf("a : %d\n",a);         //11











































}

