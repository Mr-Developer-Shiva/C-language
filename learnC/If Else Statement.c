#include<stdio.h>
int main()

{

     number();
    int value1 = 100;
    int value2 = 100;

    int sum ;

    if(value1 > value2)
        {
        sum = value1;
        }
        else if (value1 == value2)
        {
          printf("Both are same: " );
            sum = -1;
        }
    else
        {
        sum = value2;
        }
    printf("%d",sum);

    return 0;
}
void number(){                  //logical operators && || !
    int num1 = 738;
    int num2 = 675;
    int num3 =659;

    int result ;
        if(num1 > num2 && num1 > num3){
            result = num1;
        }else if(num2 > num1 && num2 > num3 ){
            result = num2 ;
        }
        else{
            result = num3;
        }
        printf("%d\n",result);
}
