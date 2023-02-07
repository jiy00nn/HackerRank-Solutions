#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int and_max = 0, or_max = 0, xor_max = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = i+1; j <= n; j++) {
      int data = i&j;
      if (and_max < data && data < k) {
        and_max = data;
      }
      data = i|j;
      if (or_max < data && data < k) {
        or_max = data;
      }
      data = i^j;
      if (xor_max < data && data < k) {
        xor_max = data;
      }
    }
  }
  printf("%d\n%d\n%d", and_max, or_max, xor_max);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
