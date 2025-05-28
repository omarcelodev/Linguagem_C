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
        printf("Número Inválido\n");
    }

    }while(numero < 0);

    return numero;
}

//Verificação de array zerada

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
    printf("(13) Configurar Exibição de Listagens\n");
    printf("(00) Finalizar o programa\n");
    printf("=========================================\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    verificarArrayZerada(arrayNumeros);

    return opcao;
}

//Configurar exibição das Listagens
void configurarListagem(void){
    printf("\n+--------------------------------------+");
    printf("\n|Escolha como deseja Listar as Array's.|\n");
    printf("+--------------------------------------+\n");

    printf("Para imprimir números com índice - Pressione 1\n");
    printf("Para imprimir numero sem índice - Pressione 0\n");
    indice = lerSimOuNao("Sua opção: ");


    printf("\nPara imprimir na Horizontal - Pressione 1\n");
    printf("Para imprimir na Vertical - Pressione 0\n");
    posicao = lerSimOuNao("Sua opção: ");

    printf("Configurações aplicadas com sucesso!");
}

//Validar escolha da Configuração de Listagem.
int lerSimOuNao(char frase[]){
    int resposta = -1;
    do{
        printf("%s", frase);
        scanf("%d", &resposta);

        if(resposta != 0 && resposta != 1){
            printf("Opção Inválida!\n");
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

//Listar Números na Array
void listarNumeros(int arrayNumeros){

    printf("\n+--------------------------+\n");
    printf("|Números contidos na Array:|\n");
    printf("+--------------------------+\n");

    imprimirListagem(arrayNumeros);

    printf("\nFim da Listagem!\n");
}

//Listar Somente números pares
void listarNumerosPares(int arrayNumeros[]){

}

//Gerar novos números pra array
void gerarNovosNumeros(int arrayNumeros[]){
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
            default: printf("Opção Inválida"); break;
        }

    }while(opcao != 0);

    return 0;
}

