#include <stdio.h>

void meow(int loops); //Can do this

int main(void)
{
    meow(11);
}

void meow(int loops)
{

    for (int i = 1; i < loops; i++){

        printf("Meow... ");
        printf("%d", i);
        printf("\n");        

    }

}
