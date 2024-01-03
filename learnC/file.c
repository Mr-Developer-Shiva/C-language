#include<stdio.h>

int main()
{
    FILE * file = fopen("new file.txt", "a");
          //write mode - w ,append mode - a,read mode- r
          fprintf(file," welcome!");


          char line[100];
          fgets(line,100,file);
          printf("%s",line);

          fclose(file);
    return 0;
}
