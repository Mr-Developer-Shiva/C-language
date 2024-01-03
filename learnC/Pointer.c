#include<stdio.h>

int main()
{
    int number = 10;
    int *number_address = &number;      //pointer dereferancing
    printf("%p\n",&number);
    printf("%p\n",number_address);

    char ch = 's';
    char *char_address = &ch;
    printf("%p\n",char_address);

    printf("%d",*number_address);
    return 0;

}
