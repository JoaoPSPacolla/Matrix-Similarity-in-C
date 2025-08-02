
#include <stdio.h>

int main()
{
    int qtdlinhas = 0 ;
    int qtdcolunas = 0;
    int simetrica = 1; //0 é que não é simetrica e 1 é simetrica
    
    scanf("%d %d",&qtdlinhas, &qtdcolunas);
    
    int matriz[qtdlinhas][qtdcolunas];
    
    for(int i=0;i<qtdlinhas;i++){
        for(int j=0;j<qtdcolunas;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    
    //Visualizar matriz
    /*for (int i = 0; i < qtdlinhas; i++) {
        for (int j = 0; j < qtdcolunas; j++) {
            printf("%d ", matriz[i][j]);
        }
    }*/
    
    //Vericando se é simetrica ou não
    
    if(qtdlinhas == qtdcolunas){
        for (int i = 0; i < qtdlinhas; i++) {
            for (int j = 0; j < qtdcolunas; j++) {
                if(matriz[i][j] != matriz[j][i]){
                    simetrica = 0;
                    break;
                }
            }
            if(simetrica == 0)
                break;
        }
    }
    else{
        simetrica = 0;
    }
    
    if(simetrica == 1){
        printf("Eh simetrica");
    }else{
        printf("Nao eh simetrica");
    }
    
    printf("\n");
    return 0;
}