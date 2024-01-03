#include<stdio.h>

struct player{
    char name[30];
    int score;
    double rate;
};

int main()
{
    struct player dhoni;
    dhoni.score =10;
    dhoni.rate =7.8;
    strcpy(dhoni.name,"MS Dhoni");

    struct player virat;
     virat.score =9;
     virat.rate = 4.3;
     strcpy(virat.name,"Virat Kohli");

    printf("%s\n",dhoni.name);
    printf("%d\n",virat.score);
    return 0;
}
