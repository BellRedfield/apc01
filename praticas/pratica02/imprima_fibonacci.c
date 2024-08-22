#include <stdio.h>

int main(){
  printf("%9s\n", "1 1");
  printf("%10s\n", "1 2 1");
  printf("%12s\n", "1 2 3 2 1");
  printf("%14s\n", "1 2 3 5 3 2 1");
  printf("%15s\n", "1 2 3 5 8 5 3 2 1");
  
  printf("%7i %i\n", 1, 1);
  printf("%6i %i %i\n", 1, 2, 1);
  printf("%4i %i %i %i %i\n", 1, 2, 3, 2, 1);
  printf("%2i %i %i %i %i %i %i\n", 1, 2, 3, 5, 3, 2, 1);
  printf("%i %i %i %i %i %i %i %i %i\n", 1, 2, 3, 5, 8, 5, 3, 2, 1);

  return 0;
}