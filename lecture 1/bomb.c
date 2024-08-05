#include <stdio.h>

int main(void)
{
    int i = 10;
    while (i > 0){
        printf("Tick... ");
        printf("%d", i);
        printf("...\n");
        i--;
    }
    printf("BOOM!");
}
