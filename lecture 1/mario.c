#include <stdio.h>

int main(void)
{

    int size_x = -1;
    int size_y = -1;

    do {
        printf("Set Width: ");
        scanf("%d", &size_x);
        printf("\nSet Height: ");
        scanf("%d", &size_y);
        printf("\n"); 
    }
    while (size_x <= 0 || size_y <= 0);

    for (int i = 0; i < size_y; i++) 
    {
        for (int j = 0; j < size_x; j++){
            printf("# ");
        }
        printf("\n");
    }

}
