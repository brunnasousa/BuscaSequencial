//Brunna Danielle Santos de Sousa
//20-07-2021


//Usando o programa de busca sequencial como base, altere-o para que o 
//programa busque quantos números repetidos existem no vetor e em que posições

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, x, y;
    int ordem1, ordem2, vetor[6];
    int repetido;

    for (i = 0; i < 5; i++){ //pedindo os valores para o usuario
        printf("\nInforme o %i valor: ", i+1);
        scanf("%i", &vetor[i]);
    }

    for (i = 0; i < 5; i++){
        for (x = i + 1; x < 5; x++){
            if (vetor[i] > vetor[x]){ //trocando de lugar
                ordem1 = vetor[i];
                vetor[i] = vetor[x];
                vetor[x] = ordem1;
            }
        }
    }

    for (i = 0; i < 5; i++){
        printf("\nValor %i: %i", i+1, vetor[i]); //valores digitados
    }

    for (i = 0; i < 5; i++){
        for (y = i + 1; y < 5; y++){
            if (vetor[i] == vetor[y]){ //verificando

                printf("\n\n---Valor que se repetiu: ");
                printf("%d ", vetor[y]);

                repetido++;

                printf("\n Posicao: %d" , i+1);

            }

            else{
                ordem2 += 1;
            }
        }
    }


    return 0;
    system("PAUSE");
}