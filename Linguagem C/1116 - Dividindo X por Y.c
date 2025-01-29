#include <stdio.h>
 
int main() {
 
    double Divi;
    int i, N, X, Y;
    
    scanf("%i", &N);
    
    for(i = 0; i < N; i++){
        scanf("%i %i", &X, &Y);
        
        Divi = (double)X / Y;
        
        if(Y == 0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1lf\n", Divi);
        }
    }
 
    return 0;
}
