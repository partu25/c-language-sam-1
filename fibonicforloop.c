#include <stdio.h>
int main() {

  int i, n;

  
  int t1 = 0, t2 = 1;

  
  

 
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  
  for (i = 3; i <= n; i++
  ) {
  	nextTerm = t1 + t2;
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
