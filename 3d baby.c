#include <stdio.h>
#include <string.h>

int main()
{

    char band[2][3][20] = {{"Mastodon", "Porcupine Tree", "Animals As Leaders"},{"Metallica", "Megadeth", "Testament"}};


    for(int i = 0; i<sizeof(band)/sizeof(band[0]); i++)
    {
        for(int j = 0; j<sizeof(band[0])/sizeof(band[0][0]); j++)
        {
            printf("%s\t",band[i][j]);
        }

        printf("\n");
    }

    int rx,ry;
    char newband[20];

    printf("Enter the row and column that you want to change.");
    scanf("%d %d", &rx, &ry);

    printf("Enter band name:");
    scanf("%s", newband);

    strcpy(band[rx][ry], newband);

    for(int i = 0; i<sizeof(band)/sizeof(band[0]); i++)
    {
        for(int j = 0; j<sizeof(band[0])/sizeof(band[0][0]); j++)
        {
            printf("%s\t",band[i][j]);
        }

        printf("\n");
    }
}