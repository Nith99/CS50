#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("What is x? ");
    scanf("%d", &x); 
    
    printf("What is y? ");
    scanf("%d", &y);

    if (x < y) {
        printf("Y eh maior que X");
    } else {
        printf("X eh maior que Y");
    }
}