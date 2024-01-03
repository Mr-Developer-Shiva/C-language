#include<stdio.h>

int main()
{
    forloop();      //for loop

    int number = 1; //while loop
    while (number <= 5){
        printf("\n%d",number);
        number++;
        }
    return 0;
}
void forloop()
{
    for(int i = 1;i<=5;i++){
        printf("%d",i);
    }
}
