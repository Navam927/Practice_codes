/*Question 2.
Write C Program to Swap two numbers using predefined macros.
Input: 5,10
Output: Before swap: x = 5, y = 10
        After swap: x = 10, y = 5
*/
#include <stdio.h>
#define swap(x, y) do { typeof(x) temp = x; x = y; y = temp; } while (0)

int main() {
    int x,y;
    printf("Input: ");
    scanf("%d %d",&x,&y);

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
