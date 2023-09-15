#include <stdio.h>
#include <string.h>

int main()
{

    char band[2][3][50] = {{"Mastodon", "Porcupine Tree", "Animals As Leaders"},{"Metallica", "Megadeth", "Testament"}};


    for(int i = 0; i<sizeof(band)/sizeof(band[0]); i++)
    {
        for(int j = 0; j<sizeof(band[0])/sizeof(band[0][0]); j++)
        {
            printf("%s\t",band[i][j]);
        }

        printf("\n");
    }

    int rx,ry;
    char newband[50];

    printf("Enter the row and column that you want to change.\n");
    scanf("%d %d", &rx, &ry);

    printf("Enter band name:\n");
    
    while ((getchar()) != '\n');
    
    fgets( newband, 50, stdin);
    newband[strcspn(newband, "\n")] = 0;

    strcpy(band[rx-1][ry-1], newband);

    for(int i = 0; i<sizeof(band)/sizeof(band[0]); i++)
    {
        for(int j = 0; j<sizeof(band[0])/sizeof(band[0][0]); j++)
        {
            printf("%s\t",band[i][j]);
        }

        printf("\n");
    }
}