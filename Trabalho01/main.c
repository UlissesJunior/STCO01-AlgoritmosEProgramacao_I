#include <stdio.h>

int main() {
    int original[4][4][3], filtro[4][4][3], resultado[4][4][3];
    int tamLinha = 4, tamColuna = 4;

    //Lê o tamanho da linha e da coluna
    scanf("%d %d", &tamLinha, &tamColuna);

    //Povoa a matriz original
    for(int i = 0; i < tamLinha; i++) {
        for(int j = 0; j < tamColuna; j++) {
            for(int k = 0; k < 3; k++) {
                printf("%d, %d, %d\n", i, j, k);
                scanf("%d", &original[i][j][k]);
            }
        }
    }

    printf("Matriz povoada %d %d %d\n", original[3][3][0],original[3][3][1], original[3][3][2]);
    
    //Povoa a matriz filtro
    for(int i = 0; i < tamLinha; i++) {
        for(int j = 0; j < tamColuna; j++) {
            for(int k = 0; k < 3; k++) {
                scanf("%d", &filtro[i][j][k]);
            }
        }
    }

    printf("Filtro povoada %d %d %d\n", filtro[3][3][0],filtro[3][3][1], filtro[3][3][2]);


    //Multiplica as matrizes para obter o resultado do original com o filtro
    for(int i = 0; i < tamLinha; i++) {
        for(int j = 0; j < tamColuna; j++) {
            for(int k = 0; k < 3; k++) {
                resultado[i][j][k] = 0; 
                for(int l = 0; l < tamColuna; l++) {
                    resultado[i][j][k] += original[i][l][k] * filtro[l][j][k];
                }
            }
        }
    }
    
    //Imprime a matriz resultado
    for(int i = 0; i < tamLinha; i++) {
        for(int j = 0; j < tamColuna; j++) {
            for(int k = 0; k < 3; k++) {
                printf("%d " ,resultado[i][j][k]);
            }
        }
        printf("\n");
    }

    return 0;
}