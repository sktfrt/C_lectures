#include <stdio.h>
#include <string.h>

int main(){
    char str;

    scanf("1 %c 0 0", &str);

    printf("%c", str);

    printf("1 %d %c %f", str, str);

    return 0;
}