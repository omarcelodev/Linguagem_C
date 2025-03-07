/*
   Programa: introducaoProgramacao.c
   Autor: professor Sandro Teixeira Carvalho
   Objetivo: ilustrar o uso de tipos de dados primitivos da linguagem C,
             entrada e saída de dados, simulação de tipo de dado lógico em C,
             comentários, uso de bibliotecas, operador ternário etc.
   Observação: sem validações de dados de entrada pois será estudado nas próximas aulas.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>

int main(void) {
	// Declaração de variáveis
	char nome[30];
	int idade;
	float salario;
	char sexo;
	bool vip;

	// Preparação do ambiente
	setlocale(LC_ALL, "Portuguese");
	SetConsoleTitleA("Introducao a Programacao");
	system("color f0");

	printf("Entre com seus dados pessoais\n\n");

	// Entrada de dados
	printf("Nome completo: ");
	gets(nome);

	printf("Idade: ");
	scanf("%d", &idade);

	printf("Salário R$: ");
	scanf("%f", &salario);

	setbuf(stdin, 0);  // limpa buffer de entrada padrão
	printf("Sexo (m/f): ");
	sexo = getchar();

	setbuf(stdin, 0);
	printf("VIP (s/n): ");
	vip = (tolower(getchar()) == 's' ? true : false);

	// Imprime dados digitados para conferência
	printf("\n\nDados informados:\n");
	printf("\nNome completo: %s", nome);
	printf("\nIdade: %d", idade);
	printf("\nSalário R$: %.2f", salario);
	printf("\nSexo: %s", sexo == 'm' ? "masculino" : "feminino");
	printf("\nVIP: %s\n\n\n", vip ? "sim" : "não");

    // Encerra o programa sinalizando para o S.O. sucesso na execução
    // getch();  // Pausa opcional. Descomente quando desejado
	return 0;
}

