#include <stdio.h>
 
int main() {
 
    int N, G, Gg, I, Ig, Resp, j, Emp;
    
    N = 1;
    
    j = 0;
    
    Gg = 0;
    Ig = 0;
    Emp = 0;
    
    while(N){
        scanf("%i %i", &I, &G);
        
        if(G > I){
            Gg += 1;   
        }
        else if(I > G){
            Ig += 1;
        }
        else{
            Emp += 1;
        }
        
        j++;
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%i", &Resp);
        
        if(Resp == 1){
            N = 1;
        }
        else{
            N = 0;
        }
    }
    
    printf("%i grenais\n", j);
    printf("Inter:%i\n", Ig);
    printf("Gremio:%i\n", Gg);
    printf("Empates:%i\n", Emp);
    
    if(G > I){
        printf("Gremio venceu mais\n");   
    }
    else if(I > G){
        printf("Inter venceu mais\n");
    }
    else{
        printf("Nao houve vencedor\n");
    }
 
    return 0;
}
