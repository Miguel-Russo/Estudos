#include <stdio.h>
 
int main() {
 
    int N, X, QtdD = 0, QtdF = 0;
    
    scanf("%i", &N);
    
    for (int cont = 1; cont <= N; cont++){
        scanf("%i", &X);
        if (X >= 10 && X <= 20){
            QtdD = QtdD + 1;
        }
        else{
            QtdF = QtdF + 1;
        }
    }
    
    printf("%i in\n", QtdD);
    printf("%i out\n", QtdF);
 
    return 0;
}
