#include<stdio.h>
#include<stdlib.h>

int main(){
 int myNumber = 10;
 float myFloat = 5.5;
 double value = 3.14;
 char myChar = 'M';
 char words[] = "New learning for C ";
 printf("%d My float value = %f",myNumber,myFloat);

 printf("\n%d\n",myNumber);
 printf("%.1f\n",myFloat);
 printf("%c\n",myChar);
 printf("%lf\n",value);
 printf("%s\n",words);  //Use the String value to use the *s;
 printf("%.2lf\n",value);


 // Constant Variable
  const double PI = 3.14; //general form of Constant(const) variable are use in UPPER CASE LETTTER.
  printf("%f",PI);

 return 0 ;
}
