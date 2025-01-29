#include <stdio.h>

int main()
{
    
    int Preco, QtdCem = 0, QtdCin = 0, QtdVin = 0, QtdDez = 0, QtdCinc = 0, QtdDois = 0, QtdUm = 0;
    
    scanf("%i", &Preco);
    
    printf("%i\n", Preco);
    
    while (Preco >= 1){
        
        if(Preco >= 100){
            Preco -= 100;
            QtdCem++;
        }
        else if(Preco >= 50){
            Preco -= 50;
            QtdCin++;
        }
        else if(Preco >= 20){
            Preco -= 20;
            QtdVin++;
        }    
        else if(Preco >= 10){
            Preco -= 10;
            QtdDez++;
        }
        else if(Preco >= 5){
            Preco -= 5;
            QtdCinc++;
        }
        else if(Preco >= 2){
            Preco -= 2;
            QtdDois++;
        }
        else{
            Preco -= 1;
            QtdUm++;
        }
    }
    
    printf("%i nota(s) de R$ 100,00\n", QtdCem);
    printf("%i nota(s) de R$ 50,00\n", QtdCin);
    printf("%i nota(s) de R$ 20,00\n", QtdVin);
    printf("%i nota(s) de R$ 10,00\n", QtdDez);
    printf("%i nota(s) de R$ 5,00\n", QtdCinc);
    printf("%i nota(s) de R$ 2,00\n", QtdDois);
    printf("%i nota(s) de R$ 1,00\n", QtdUm);
    
    return 0;
}
