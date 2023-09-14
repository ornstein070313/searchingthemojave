#include <stdio.h>

int main()
{
    char name[50], food[50], burger[10];
    int age; 

    printf("What is your age?\n");
    scanf("%d", &age);

    printf("What is your name?\n");
    scanf("%s", &name);

    printf("Hello %s.You are %d years old.", name, age);

    printf("What food do you like?");

    scanf("%s", &food);

    printf("Do you like burgers?");

    scanf(" %c", &burger);

    if(burger == 'Y')
        printf("I like burgers too.");

    else
        printf("why dont you like burgers.");

    




}