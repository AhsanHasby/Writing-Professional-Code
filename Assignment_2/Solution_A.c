#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char ch) {
    //Making small letters for readablity
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void print_vowels(char* s) {
    int length = strlen(s);
    for(int i = 0;i < length; i++) {
        if(is_vowel(s[i])) {
            printf("%c", s[i]);
        }
        
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    //Checking if input is valid or not
    if(scanf("%99s", str) != 1) {
        printf("Invalid input");
        return 0;
    }
    printf("The vowels included in the string are below: \n");
    print_vowels(str);

    return 0;
}
