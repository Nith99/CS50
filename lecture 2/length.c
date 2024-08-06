#include <stdio.h>
#include <string.h>

int get_string_length(char str[]);

int main(void)
{
    char name[50]; // limite 50
    scanf("%s", name); // Don't need a pointer

    printf("Using my function: %i\n", get_string_length(name));
    printf("Using string.h function: %i\n", strlen(name));

}

int get_string_length(char str[])
{

    int n = 0;
    while (str[n] != '\0') //While memory don't reach the limit of the array...
    {
        n++; //Add, so we know the length of the string, at the end of the loop!
    }

    return n;
}
