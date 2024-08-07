#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    char s[50];
    printf("Before: ");
    scanf("%s\n", s);
    printf("After: ");
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {

        if (s[i] >= 'a' && s[i] <= 'z'){
            printf("%c", toupper(s[i]));
        }else{
            printf("%c", s[i]);
        }
 
    }

}
