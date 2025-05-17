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
    printf("(01) Listar todos os n�meros contidos no array\n");
    printf("(02) Listar somente os n�meros pares\n");
    printf("(03) Listar somente os n�meros �mpares\n");
    printf("(04) Listar somente os n�meros primos\n");
    printf("(05) Calcular e imprimir o somat�rio de todos os n�meros\n");
    printf("(06) Calcular e imprimir a m�dia aritm�tica de todos os n�meros\n");
    printf("(07) Imprimir a quantidade de n�meros iguais a um dado n�mero\n");
    printf("(08) Imprimir a primeira ocorr�ncia de um dado n�mero do array\n");
    printf("(09) Imprimir a �ltima ocorr�ncia de um dado n�mero do array\n");
    printf("(10) Imprimir o maior n�mero contido no array\n");
    printf("(11) Imprimir o menor n�mero contido no array\n");
    printf("(12) Gerar novos n�meros para o array\n");
    printf("(00) Finalizar o programa\n");
    printf("=========================================\n");
    printf("Escolha uma op��o: ");
    scanf("%d", &opcao);

    do{
        if(opcao < 0 || opcao > 12){
            printf("Opc�o Inv�lida. Tente Novamente: ");
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
    printf("Digite um intervalo de n�meros a ser gerado.\n");
    printf("OBS: Os n�meros n�o podem ser negativos e devem ser maiores que 0.\n");

    do{
        intervalo1 = lerNumero("Digite o primeiro n�mero: ");
        intervalo2 = lerNumero("Digite o segundo n�mero: ");

        if(intervalo2 < intervalo1 || intervalo1 <= 0 || intervalo2 <= 0 || intervalo1 == intervalo2){
            printf("\nIntervalo Inv�lido, Redigite\n");
        }

    }while(intervalo2 < intervalo1 || intervalo1 <= 0 || intervalo2 <= 0 || intervalo1 == intervalo2);

    srand(time(NULL));
    printf("Os n�meros gerados foram:\n");

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
