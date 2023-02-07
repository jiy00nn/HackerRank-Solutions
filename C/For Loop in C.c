#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    const char* n_word[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i = a; i <= b; i++){
        if (i > 0 && i < 10) {
            printf("%s\n", n_word[i-1]);
        } else {
            if (i%2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }    

    return 0;
}

