#include <stdio.h>

int main() {
  
  int count = 0;
  
  printf("Enter a number to countdown: ");
  scanf("%d", &count);
  
  for (; count >= 0; count--) {
      printf("%d...\n", count);
  }
  return 0;
}