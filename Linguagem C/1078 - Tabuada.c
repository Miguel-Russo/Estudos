#include <stdio.h>
 
int main() {
 
    int N, i, mult;
    
    scanf("%i", &N);
    
    for(i = 1; i <= 10; i++){
        mult = i * N;
        printf("%i x %i = %i\n", i, N, mult);
    }
 
    return 0;
}
