#include <stdio.h>
 
int main() {
 
    int N[20], i, cont = 19;
    
    for(i = 0; i < 20; i++){
        scanf("%i", &N[i]);
    }
    
    for(i = 0; i < 10; i++){
        int temp;
        
        temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
        
    }
    
    for(i = 0; i < 20; i++){
        printf("N[%i] = %i\n", i, N[i]);
    }
 
    return 0;
}
