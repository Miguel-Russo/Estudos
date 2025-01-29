#include <stdio.h>

void vetor(double X[]);
 
int main(){
    
    double A[100];
    
    vetor(A);
 
    return 0;
}

void vetor(double X[]){
    int i;
    
    for(i = 0; i < 100; i++){
        scanf("%lf", &X[i]);
        
        if(X[i] <= 10){
            printf("A[%i] = %.1lf\n", i, X[i]);
        }
    }
}
