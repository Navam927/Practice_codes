#include <stdio.h>

#if defined(SITUATION)
    #error Compilation error: This is the specified situation
#endif

int main() {
    printf("No compilation error occurred\n");
    return 0;
}
