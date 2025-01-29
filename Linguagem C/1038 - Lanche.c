#include <stdio.h>
 
int main() {
 
    int cod, qtd;
    double preco, total;
    
    scanf ("%i", &cod);
    scanf ("%i", &qtd);
    
    if (cod == 1){
        preco = 4.00;
        total = preco * qtd;
    }
    else if (cod == 2){
        preco = 4.50;
        total = preco * qtd;
    }
    else if(cod == 3){
        preco = 5.00;
        total = preco * qtd;
    }
    else if(cod == 4){
        preco = 2.00;
        total = preco * qtd;
    }
    else{
        preco = 1.50;
        total = preco * qtd;
    }
    
    printf ("Total: R$ %.2lf\n", total);
 
    return 0;
}
