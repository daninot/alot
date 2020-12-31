#include <stdio.h>
#include <stdlib.h>


void imprime_vetor(int tam, int vet[]){

    for(int i=1;i<=tam;i++){
        printf("vet[%d] = %d  ",i,vet[i]);
    }
    printf("\n\n");
}

void imprime_vetor_freq(int freq[]){
    for(int i=1;i<=60;i++){
        printf("[%d] --> %d vezes\n", i,freq[i]);
    }
}

void troca(int *a,int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
void selection(int *v, int tam)
{
    int i, j, min;

    for(i=0; i<(tam-1); i++)
    {
        min = i;
        for(j=(i+1); j<tam; j++)
        {
            if(v[j] < v[min])
                min = j;
        }
        troca(&v[i],&v[min]);
    }
}

int main(void){

    int num=1, freq[61];

    for(int i=1; i<=60; i++)
        freq[i] = 0;

    //imprime_vetor(60,freq);

    for(int i=0; i<11; i++){
        while(scanf("%d ",&num) == 1){
            //printf("%d",num);
            freq[num]++;
        }
    }
    imprime_vetor(60,freq);

    //imprime_vetor_freq(freq);

    imprime_vetor_freq(freq);

    return 0;
}
