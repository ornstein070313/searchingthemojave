#include <stdio.h>

int main()
{
    int blanks = 0, tabs = 0, newlines = 0, c, letters = 0;

    while((c=getchar()) != EOF)
    {
        if(c == ' ')
        {
            blanks++;
        }
        
        if(c == '\t')
        {
            tabs++;
        }

        if(c == '\n')
        {
            newlines++;
        }
        else
        {
            letters++;
        }
        
    }
    printf("Blanks : %d\n", blanks);
    printf("tabs : %d\n", tabs);
    printf("newlines : %d\n", newlines);
    printf("letters : %d\n", letters);
}