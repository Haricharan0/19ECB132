#include <stdio.h>
int main() {
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}
/*
  output
Enter an integer: 5
5 * 1 = 5 
5 * 2 = 10 
5 * 3 = 15 
5 * 4 = 20 
5 * 5 = 25 
5 * 6 = 30 
5 * 7 = 35 
5 * 8 = 40 
5 * 9 = 45 
5 * 10 = 50 
/*