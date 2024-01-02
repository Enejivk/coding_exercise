/*USING FOR LOOP*/
#include <stdio.h>

int main(void)
{ 
    char i;
    for(i = 'a'; i <= 'z'; i++)
    {
        // putchar(i);
        printf("%c", i);
    }
    // putchar('\n');
    printf("\n");

    return 0;
}

// USING WHILE LOOP
/**
#include <stdio.h>

int main(void)
{
    char i = 'a';
    while(i <= 'z')
    {
        
        putchar(i);
        i++;
    }
    putchar('\n');

    return 0;
}
*/