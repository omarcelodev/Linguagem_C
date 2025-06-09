#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>
#define TAM 50

int indice = 1, posicao = 0;

//Ler numeros
int lerNumero(char mensagem[]){
    int numero;

    do{
    printf("%s", mensagem);
    scanf("%d", &numero);

    if(numero <=0){
        printf("Número Inválido\n");
    }

    }while(numero <= 0);

    return numero;
}

//Verificação de array zerada
bool verificarArrayZerada(int arrayNumeros[]){

    if(arrayNumeros[0] == 0){
        return true;
    }else{
        return false;
    }
}

//Imprimindo Menu
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
    printf("(13) Configurar Exibição de Listagens\n");
    printf("(00) Finalizar o programa\n");
    printf("=========================================\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    return opcao;
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
void listarNumeros(int arrayNumeros[]){

    printf("\n+--------------------------+\n");
    printf("|Números contidos na Array:|\n");
    printf("+--------------------------+\n");

    imprimirListagem(arrayNumeros);

    printf("\nFim da Listagem!\n");
}

//Verificar se o número é par
bool isPar(int numero){
    return numero % 2 == 0;
}

//Listar Números pares
void listarPares(int arrayNumeros[]){
    int totalPares = 0;

    printf("\n=== NÚMEROS PARES ===\n");

    for(int i = 0; i < TAM; i++){
        if(isPar(arrayNumeros[i])){
            printf("[%d] = %d\n", i, arrayNumeros[i]);
            totalPares++;
        }
    }

    if(totalPares == 0){
        printf("Nenhum número par encontrado!\n");
    }
    else{
        printf("Total de números pares na array: %d\n", totalPares);
    }

    printf("=== FIM DA LISTAGEM ===\n");
}

//Verificar se o número é ímpar
bool isImpar(int numero){
    return numero % 2 != 0;
}

//Listar números impares
void listarImpares(int arrayNumeros[]){
    int totalImpares = 0;

    printf("\n=== NÚMEROS IMPARES ===\n");

    for(int i = 0; i < TAM; i++){
        if(isImpar(arrayNumeros[i])){
            printf("[%d] = %d\n", i, arrayNumeros[i]);
            totalImpares++;
        }
    }

    if(totalImpares == 0){
        printf("Nenhum número impar encontrado!\n");
    }
    else{
        printf("\n|Total de números impares na array: %d |\n\n", totalImpares);
    }

    printf("=== FIM DA LISTAGEM ===\n");

}

//Verificar se é primo
bool isPrimo(int numero){
    int cont = 0;

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            cont++;
        }
    }

    return(cont == 2);
}

//Listar números primos
void listarPrimos(int arrayNumeros[]){
    int totalPrimos = 0;

    printf("Números Primos:\n");

    for(int i = 0; i < TAM; i++){
        if(isPrimo(arrayNumeros[i])){
            printf("[%d] = %d\n", i, arrayNumeros[i]);
            totalPrimos++;
        }
    }

    if(totalPrimos == 0){
        printf("Nenhum número primo encontrado");
    }else{
        printf("\n|Total de números primos na array: %d |\n\n", totalPrimos);
    }

    printf("=== FIM DA LISTAGEM ===\n");
}

//Calculando Somatorio de todos os números.
int somatorioNumeros(int arrayNumeros[]){
    int somatorio = 0;

    for(int i = 0; i < TAM; i++){
        somatorio += arrayNumeros[i];
    }

    return somatorio;
}

//Imprimindo Somatorio de todos os números.
void imprimirSomatorio(int arrayNumeros[]){
    int soma = somatorioNumeros(arrayNumeros);
    printf("O somatorio de todos os números é = %d", soma);
}

//Calculando média aritmética
void mediaAritmetica(int arrayNumeros[]){
    int somatorio = somatorioNumeros(arrayNumeros);
    float media = (float)somatorio / TAM;

    printf("A média é = %.2f\n", media);
}

//Calcular quantidades de um número com base em outro!!!!!
void qntdNumeroIgual(int arrayNumero[]){
    int numero = lerNumero("Digite um número: ");
    int cont = 0;

    for(int i = 0; i < TAM; i++){
        if(numero == arrayNumero[i]){
            cont++;
        }
    }

    if(cont == 0){
        printf("Não foi encontrado nenhum número na array = %d", numero);
    }else{
        printf("Quantidade de números iguais a %d = %d\n", numero, cont);
    }
}

//Imprimindo Primeira ocorrência
void primeiraOcorrencia(int arrayNumero[]){
    int numero = 0;
    int encontrado = 0;

    while(!encontrado){
        numero = lerNumero("Digite um número: ");

        for(int i = 0; i < TAM; i++){
            if(numero == arrayNumero[i]){
                printf("A primeira ocorrência do número %d foi na posição [%d]\n", numero, i);
                printf("[%d] = %d", i, arrayNumero[i]);
                encontrado = 1;
                break;
            }
        }

        if(!encontrado){
            printf("Este número não foi encontrado no array, tente novamente!\n");
        }
    }
}

//Imprimindo Ultima ocorrência
void ultimaOcorrencia(int arrayNumero[]){
    int numero = 0;
    int ultimaPosicao = -1;

    while(ultimaPosicao == -1){
        numero = lerNumero("Digite um número: ");

        for(int i = 0; i < TAM; i++){
            if(numero == arrayNumero[i]){
                ultimaPosicao = i;
            }
        }

        if(ultimaPosicao == -1){
            printf("Este número não foi encontrado no array, tente novamente!\n");
        }
    }

    printf("A última ocorrência do número %d foi na posição [%d]\n", numero, ultimaPosicao);
    printf("[%d] = %d\n", ultimaPosicao, arrayNumero[ultimaPosicao]);
}

//Imprimindo maior número
void maiorNumero(int arrayNumero[]){
    int maior = arrayNumero[0];

    for(int i = 1; i < TAM; i++){
        if(arrayNumero[i] > maior){
            maior = arrayNumero[i];
        }
    }

    printf("Maior número = %d", maior);
}

//Imprimindo menor número
void menorNumero(int arrayNumero[]){
    int menor = arrayNumero[0];

    for(int i = 1; i < TAM; i++){
        if(arrayNumero[i] < menor){
            menor = arrayNumero[i];
        }
    }

    printf("Menor número = %d", menor);
}

//Gerar novos números pra array
void gerarNovosNumeros(int arrayNumeros[]){
    int intervalo1, intervalo2;
    printf("+-----------------------------------------------------------------+\n");
    printf("|Digite um intervalo de números a ser gerado.                     |\n");
    printf("|OBS: Os números não podem ser negativos e devem ser maiores que 0|.\n");
    printf("+-----------------------------------------------------------------+\n");

    do{
        intervalo1 = lerNumero("Digite o primeiro número: ");
        intervalo2 = lerNumero("Digite o segundo número: ");

        if(intervalo2 < intervalo1 || intervalo1 <= 0 || intervalo2 <= 0 || intervalo1 == intervalo2){
            printf("\nIntervalo Inválido, Redigite\n");
        }

    }while(intervalo2 < intervalo1 || intervalo1 <= 0 || intervalo2 <= 0 || intervalo1 == intervalo2);

    srand(time(NULL));
    printf("\nArray Preenchida com sucesso!");
    printf("\nOs números gerados foram:\n");

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
        opcao = menu();
        if(opcao < 12 && verificarArrayZerada(arrayNumeros)){
            printf("+------------------------------------------------------------+\n");
            printf("|A Array está zerada! Preencha com a opcão 12 para continuar.|\n");
            printf("+------------------------------------------------------------+\n");
            continue;
        }

        switch(opcao){

            case 1: listarNumeros(arrayNumeros); break;
            case 2: listarPares(arrayNumeros); break;
            case 3: listarImpares(arrayNumeros); break;
            case 4: listarPrimos(arrayNumeros); break;
            case 5: imprimirSomatorio(arrayNumeros); break;
            case 6: mediaAritmetica(arrayNumeros); break;
            case 7: qntdNumeroIgual(arrayNumeros); break;
            case 8: primeiraOcorrencia(arrayNumeros); break;
            case 9: ultimaOcorrencia(arrayNumeros); break;
            case 10: maiorNumero(arrayNumeros); break;
            case 11: menorNumero(arrayNumeros); break;
            case 12: gerarNovosNumeros(arrayNumeros); break;
            case 13: configurarListagem(); break;
            default: printf("Opção Inválida"); break;
        }

    }while(opcao != 0);

    return 0;
}
