#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM 5

int menu(){
    int opcao;

    printf("\n\n=========================================\n");
    printf("               MENU DE OPCOES            \n");
    printf("=========================================\n");
    printf("(01) Listar todos os números contidos no array\n");
    printf("(02) Listar somente os números pares\n");
    printf("(03) Listar somente os números ímpares\n");
    printf("(04) Listar somente os números primos\n");
    printf("(05) Calcular e imprimir o somatório de todos os números\n");
    printf("(06) Calcular e imprimir a média aritmética de todos os números\n");
    printf("(07) Imprimir a quantidade de números iguais a um dado número\n");
    printf("(08) Imprimir a primeira ocorrência de um dado número do array\n");
    printf("(09) Imprimir a última ocorrência de um dado número do array\n");
    printf("(10) Imprimir o maior número contido no array\n");
    printf("(11) Imprimir o menor número contido no array\n");
    printf("(12) Gerar novos números para o array\n");
    printf("(00) Finalizar o programa\n");
    printf("=========================================\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    do{
        if(opcao < 0 || opcao > 12){
            printf("Opcão Inválida. Tente Novamente: ");
            scanf("%d", &opcao);
        }

    }while(opcao < 0 || opcao > 12);

    return opcao;
}

int lerNumero(char mensagem[]){
    int numero;
    printf("%s", mensagem);
    scanf("%d", &numero);

    return numero;
}

void gerarNovosNumeros(int numeros[]){
    int intervalo1, intervalo2;
    printf("Digite um intervalo de números a ser gerado.\n");
    printf("OBS: Os números não podem ser negativos e devem ser maiores que 0.\n");

    do{
        intervalo1 = lerNumero("Digite o primeiro número: ");
        intervalo2 = lerNumero("Digite o segundo número: ");

        if(intervalo2 < intervalo1 || intervalo1 <= 0 || intervalo2 <= 0 || intervalo1 == intervalo2){
            printf("\nIntervalo Inválido, Redigite\n");
        }

    }while(intervalo2 < intervalo1 || intervalo1 <= 0 || intervalo2 <= 0 || intervalo1 == intervalo2);

    srand(time(NULL));
    printf("Os números gerados foram:\n");

    for(int i = 0; i < TAM; i++){
        numeros[i] = rand() % (intervalo2 - intervalo1 + 1) + intervalo1;
        printf("[%d] = %d\n", i, numeros[i]);
    }

}

int main(){
    int numeros[TAM], opcao;
    int intervalo1 = 0, intervalo2 = 0;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    numeros[1] = 4;

    do{

        opcao = menu();

        switch(opcao){
            case 12:
                gerarNovosNumeros(numeros);


        }

    }while(opcao != 0);




    return 0;

}
