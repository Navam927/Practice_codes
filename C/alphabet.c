#include <stdio.h>

int main() {
    char letter;
    
    printf("Uppercase English Alphabet:\n");
    
    for (letter = 'A'; letter <= 'Z'; ++letter) {
        printf("%c ", letter);
    }
    
    printf("\n");
    
    return 0;
}
