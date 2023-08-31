#define X 5
#include<stdio.h>
int main() {
   printf("Name of file is: %s\n",__FILE__);
   printf("Current time is: "__TIME__);
   printf("\nNumber of lines in code are: %d\n",__LINE__);
   #ifdef __STDC__
      printf("Compiler comlies with C Standard....");
   #else
      printf("Compiler not compiles with c Standard....");
   #endif
   return 0;
}