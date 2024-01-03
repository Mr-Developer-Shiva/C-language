
#include<stdio.h>
 int main()
 {
    /* int number;
     printf("Enter a number: \n");
     scanf("%d",&number);  // Pointer
     printf("Your favorite number is %d\n",number);   */

     /* double numbers;
     printf("Enter a number: \n");
     scanf("%lf",&numbers);  // Pointer
     printf("Your favorite number is %f\n",numbers);   */

     /*char letter;
     printf("Enter Your name: ");
     scanf("%c",&letter);
     printf("Your Favorite Character %c",letter);   */

     char name[30];
     printf("Enter a favorite word: ");
     fgets(name,30,stdin);
     printf("Your favorite: %s.",name);
    return 0 ;
 }
