#include <stdio.h>

int add(int a, int b);

int main(void){

    int x;
    int y;


    scanf("%d", &x);
    scanf("%d", &y);

    printf("%i\n", add(x, y));

}

int add(int a, int b)
{
    return a + b;
}