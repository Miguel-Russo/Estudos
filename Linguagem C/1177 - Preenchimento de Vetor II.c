#include <stdio.h>
 
int main() {
 
    int N[1000], X, i, j = 0;
    
    scanf("%i", &X);
    
    for(i = 0; i < 1000; i++){

        N[i] = j;
        j++;
        printf("N[%i] = %i\n", i, N[i]);
            
        if(j == X){
            j = 0;
        }
        
    }
 
    return 0;
}
