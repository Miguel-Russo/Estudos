#include <stdio.h>
 
int main() {
 
    int N;
    double A, B, C, Media;
    
    scanf("%i", &N);
    
    for (int cont = 1; cont <= N; cont++){
        scanf("%lf", &A);
        scanf("%lf", &B);
        scanf("%lf", &C);
        
        Media = (A*2 + B*3 + C*5) / 10;
        
        printf("%.1lf\n", Media);
    }
 
    return 0;
}
