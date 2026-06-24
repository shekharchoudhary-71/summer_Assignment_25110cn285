#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            freq[(unsigned char)str[i]]++;
        }
    }

    return 0;
}
