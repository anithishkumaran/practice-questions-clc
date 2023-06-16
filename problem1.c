#include <stdio.h>
#include <string.h>

void rev(char* str) {
    int len = strlen(str);
    char* start = str;
    char* end = str +len - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[30];
    scanf("%s",str);
    rev(str);
    printf( "%s\n", str);
    return 0;
}
