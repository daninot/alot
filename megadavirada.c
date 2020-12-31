#include <stdio.h>
#include <stdlib.h>

void imprime_matriz(int linhas, int colunas, int vet[linhas][colunas]){

    for(int i=0;i<linhas;i++){
        for(int j=0; j<colunas; j++){
            printf("%d ",vet[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void imprime_matriz_2(int linhas, int colunas, int vet[linhas][colunas]){

    for(int i=0;i<colunas;i++){
        for(int j=0; j<linhas; j++){
            printf("%d ",vet[j][i]);
        }
        printf("\n");
    }
}
void imprime_vetor(int vet[], int tam){
    for(int i=0;i<tam;i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
}

void troca(int i, int max, int linhas, int colunas, int a[linhas][colunas])
{
    /*int aux;
    aux = *a;
    *a = *b;
    *b = aux;*/

    int aux1[2], aux2[2];

    for(int c=0; c<2; c++){
        aux1[c] = a[c][i];
        aux2[c] = a[c][max];
    }
    //printf("aux1 %d %d \n",aux1[0],aux1[1]);
    //printf("aux2 %d %d \n",aux2[0],aux2[1]);

    for(int c=0; c<2; c++){
        a[c][i] = aux2[c];
        a[c][max] = aux1[c];
    }

}
void selection(int linhas, int colunas, int v[linhas][colunas])
{
    int i, j, max;

    for(i=0; i<(colunas-1); i++)
    {
        max = i;
        for(j=(i+1); j<colunas; j++)
        {
            if(v[0][j] > v[0][max])
                max = j;
        }
        troca(i,max,linhas,colunas,v);
    }
}

int main(void){

    int num=0, freq[2][61];

    //inicializando a matriz
    for(int i=0; i<61; i++){
        freq[0][i] = 0;
        freq[1][i] = i;
    }
    //imprime_matriz(2,61,freq);

    //lendo os resultados;
    for(int i=0; i<11; i++){
        while(scanf("%d ",&num) == 1){
            //printf("%d",num);
            freq[0][num]++;
        }
    }
    //imprime_matriz(2,61,freq);

    selection(2,61,freq);
    imprime_matriz_2(2,61,freq);

    //linha 0 = quantas vezes aparece
    //linha 1 = número
    /*int quantos_total=0, i=0, qtd_1=0, qtd_2=0, qtd_3=0, qtd_4=0;
    while(i<61){
        if(freq[0][i] > 0){
            quantos_total++;

            if(freq[0][i] == 4)
                qtd_4++;
            if(freq[0][i] == 3)
                qtd_3++;
            if(freq[0][i] == 2)
                qtd_2++;
            if(freq[0][i] == 1)
                qtd_1++;
        }
        i++;
    }
    printf("quantos aparecem mais de uma vez: %d\n",quantos_total);
    printf("aparecem 4 vezes: %d\n",qtd_4);
    printf("aparecem 3 vezes: %d\n",qtd_3);
    printf("aparecem 2 vezes: %d\n",qtd_2);
    printf("aparecem 1 vez: %d\n",qtd_1);

    //imprime_matriz(2,61,freq);

    int aparece_4_vezes[qtd_4], aparece_3_vezes[qtd_3], aparece_2_vezes[qtd_2], aparece_1_vez[qtd_1];
    i=0;
    int quatro=0, tres=0, dois=0, um=0;
    while(i<61){
        if(freq[0][i] == 4){
            aparece_4_vezes[quatro] = freq[1][i];
            quatro++;
        }
        else if(freq[0][i] == 3){
            aparece_3_vezes[tres] = freq[1][i];
            tres++;
        }
        else if(freq[0][i] == 2){
            aparece_2_vezes[dois] = freq[1][i];
            dois++;
        }
        else if(freq[0][i] == 1){
            aparece_1_vez[um] = freq[1][i];
            um++;
        }
        //printf("%d  ",i);
        i++;
    }

    printf("números que aparecem 4 vezes: \n");
    imprime_vetor(aparece_4_vezes,qtd_4);
    printf("números que aparecem 3 vezes: \n");
    imprime_vetor(aparece_3_vezes,qtd_3);
    printf("números que aparecem 2 vezes: \n");
    imprime_vetor(aparece_2_vezes,qtd_2);
    printf("números que aparecem 1 vezes: \n");
    imprime_vetor(aparece_1_vez,qtd_1);*/

    return 0;
}
