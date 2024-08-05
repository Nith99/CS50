#include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter one character: ");
    scanf("%c", &ch);
    
    if ((ch == 'y') || (ch == 'Y')) 
    {
        printf("You Agreed!");
    } else if ((ch == 'n') || (ch == 'N'))
    {
        printf("You Denied!");
    } else {
        printf("Invalid!");
    }
}
