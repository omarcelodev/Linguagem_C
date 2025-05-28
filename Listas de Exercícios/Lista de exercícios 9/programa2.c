#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM 5

int indice = 1, posicao = 0;

//Ler numeros
int lerNumero(char mensagem[]){
    int numero;

    do{
    printf("%s", mensagem);
    scanf("%d", &numero);

    if(numero < 0){
        printf("N�mero Inv�lido\n");
    }

    }while(numero < 0);

    return numero;
}

//Verifica��o de array zerada

void verificarArrayZerada(int arrayNumeros[]){
    int verificacao;
    for(int i = 0; i < TAM; i++){
        verificacao = arrayNumeros[i];
    }

    if(verificacao == 0){
        printf("Array Zerada, Preencha com a opcao 12");
    }

}

//Imprimindo Menu
int menu(int arrayNumeros){
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
    printf("(13) Configurar Exibi��o de Listagens\n");
    printf("(00) Finalizar o programa\n");
    printf("=========================================\n");
    printf("Escolha uma op��o: ");
    scanf("%d", &opcao);
    verificarArrayZerada(arrayNumeros);

    return opcao;
}

//Configurar exibi��o das Listagens
void configurarListagem(void){
    printf("\n+--------------------------------------+");
    printf("\n|Escolha como deseja Listar as Array's.|\n");
    printf("+--------------------------------------+\n");

    printf("Para imprimir n�meros com �ndice - Pressione 1\n");
    printf("Para imprimir numero sem �ndice - Pressione 0\n");
    indice = lerSimOuNao("Sua op��o: ");


    printf("\nPara imprimir na Horizontal - Pressione 1\n");
    printf("Para imprimir na Vertical - Pressione 0\n");
    posicao = lerSimOuNao("Sua op��o: ");

    printf("Configura��es aplicadas com sucesso!");
}

//Validar escolha da Configura��o de Listagem.
int lerSimOuNao(char frase[]){
    int resposta = -1;
    do{
        printf("%s", frase);
        scanf("%d", &resposta);

        if(resposta != 0 && resposta != 1){
            printf("Op��o Inv�lida!\n");
        }

    }while(resposta !=0 && resposta != 1);

    return resposta;
}

//Imprimir Listagens
void imprimirListagem(int arrayNumeros[]){
    for(int i = 0; i < TAM; i++){
        if(indice == 1){
            if(posicao == 1){
                printf("%d - [%d]", i, arrayNumeros[i]);
                if( i < TAM-1){
                    printf("  ; ");
                }

            }else{
                printf("%d - [%d]\n", i, arrayNumeros[i]);
            }

        }else{
            if(posicao == 1){
                printf("[%d]", arrayNumeros[i]);
                if( i < TAM-1){
                    printf("  ; ");
                }

            }else{
                printf("[%d]\n", arrayNumeros[i]);
            }
        }
    }

}

//Listar N�meros na Array
void listarNumeros(int arrayNumeros){

    printf("\n+--------------------------+\n");
    printf("|N�meros contidos na Array:|\n");
    printf("+--------------------------+\n");

    imprimirListagem(arrayNumeros);

    printf("\nFim da Listagem!\n");
}

//Listar Somente n�meros pares
void listarNumerosPares(int arrayNumeros[]){

}

//Gerar novos n�meros pra array
void gerarNovosNumeros(int arrayNumeros[]){
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
        arrayNumeros[i] = rand() % (intervalo2 - intervalo1 + 1) + intervalo1;
        printf("[%d] = %d\n", i,arrayNumeros[i]);
    }
}

int main(){
    int arrayNumeros[TAM] = {0}, opcao;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        opcao = menu(arrayNumeros);

        switch(opcao){
            case 1: listarNumeros(arrayNumeros); break;
            case 12: gerarNovosNumeros(arrayNumeros); break;
            case 13: configurarListagem(); break;
            default: printf("Op��o Inv�lida"); break;
        }

    }while(opcao != 0);

    return 0;
}

