#include <stdio.h>
 
int main() {
 
    int HoraInicial, HoraFinal, Duracao;
    
    scanf("%i", &HoraInicial);
    scanf("%i", &HoraFinal);
    
    if(HoraFinal > HoraInicial){
        Duracao = HoraFinal - HoraInicial;
    }
    else{
        HoraFinal += 24;
        Duracao = HoraFinal - HoraInicial;
    }
    
    printf("O JOGO DUROU %i HORA(S)\n", Duracao);
 
    return 0;
}
