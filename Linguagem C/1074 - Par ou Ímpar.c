#include <stdio.h>
 
int main() {
 
    int N, X;
    
    scanf("%i", &N);
    
    for (int cont = 1; cont <= N; cont++){
        
        scanf("%i", &X);
        
        if (X % 2 == 0 && X > 0){
            printf("EVEN POSITIVE\n");
        }
        else if(X % 2 == 0 && X < 0){
            printf("EVEN NEGATIVE\n");
        }
        else if (X % 2 != 0 && X > 0){
            printf("ODD POSITIVE\n");
        }
        else if (X % 2 != 0 && X < 0){
            printf("ODD NEGATIVE\n");
        }
        else{
            printf("NULL\n");  
        }
    }
 
    return 0;
}
