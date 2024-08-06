#include <stdio.h>
#include <string.h>

int main(void)
{

    char s[50];
    printf("Output: ");
    scanf("%s", s);

    //int string_length = strlen(s); //This prevents the loop of calling the same function again and again
    for (int i = 0, string_length = strlen(s); i < string_length; i++)
    {
        printf("%c", s[i]);
    }

    printf("\n");

}
