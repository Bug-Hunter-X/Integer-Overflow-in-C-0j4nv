#include <stdio.h>
#include <limits.h>

int main() {
  int x = INT_MAX; 
  if (x + 1 > INT_MAX) { 
    printf("Overflow would occur!");
  } else {
    x = x + 1; 
    printf("%d", x);
  } 
  return 0;
}