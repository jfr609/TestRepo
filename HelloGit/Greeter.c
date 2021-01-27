#include <stdio.h>

int main()
{
    char name[21];
    
    printf("What's your name? ");
    scanf("%20s", name);
    printf("\nHello %s, what a wonderful day today.\n", name);
    getchar();
    
    return 0;
}
