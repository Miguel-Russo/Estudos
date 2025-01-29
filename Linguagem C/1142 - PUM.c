#include <stdio.h>
 
int main() {
 
    int i, j, X, num;
    
    scanf("%i", &X);
    
    num = 1;
    
    for(i = 1; i <= X; i++){
        for(j = 1; j <= 3; j++){
            printf("%i ", num);
            num += 1;
        }
        num += 1;
        printf("PUM\n");
    }
 
    return 0;
}
