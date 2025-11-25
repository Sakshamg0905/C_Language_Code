#include <stdio.h>

int main(){
    char ch = 'a';
    printf("the value of character is %c\n",ch);
    printf("the value of character is %d\n",ch);
    // 92 or 122
    if (ch>=97 && ch<=122)
    {
        printf("the character is lower case\n");
    }else
        printf("the character is not lower case\n");
    
    return 0;
}