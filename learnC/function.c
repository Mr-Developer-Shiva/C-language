#include<stdio.h>

 int main()     // function
 {
     numberType(1);
     numberType(10);
     numberType(100);

     printf("Add number of return Statement value = %d\n",addNumber(23,4));

     return 0;
 }
 void numberType(int num)
 {
     printf("Number: %d\n",num);
     printf("Previous number: %d\n",num - 1);
     printf("Next number: %d\n",num + 1);
 }
 int addNumber(int num1,int num2)
 {
     return num1 + num2;
 }
