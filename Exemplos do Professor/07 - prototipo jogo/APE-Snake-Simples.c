/*
   Programa: APE-Snake-Simple.c
   Autor: Professor Sandro Teixeira Carvalho
   APE - Algoritmos e Programação Estruturada
   Objetivo: Incentivar o estudo da lógica de programação e
             melhorar a compreensão das estruturas de decisão,
             de repetição e arrays na programação.
*/

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ESC 27
#define PAREDE 219
#define COBRA 219
#define BOLACHA 1
#define ALTURA_JANELA 18
#define LARGURA_JANELA 40
#define ACIMA 72
#define ABAIXO 80
#define DIREITA 77
#define ESQUERDA 75

// Define enumeração para simular boolean em C (se stdbool.h não disponível)
enum boolean { true = 1, false = 0 };
typedef enum boolean bool;

// Posiciona cursor na tela
void gotoxy(int col, int lin) {
    COORD p = {col, lin};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

// Liga ou Desliga o cursor
void cursor(bool show) {
    HANDLE hConsoleOutput;
    CONSOLE_CURSOR_INFO structCursorInfo;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleCursorInfo(hConsoleOutput, &structCursorInfo);
    structCursorInfo.bVisible = show;
    SetConsoleCursorInfo( hConsoleOutput, &structCursorInfo );
}

// Gera posição aleatória para bolacha
void geraPosBolacha(int * x, int * y) {
    *x = (rand() % (LARGURA_JANELA - 1)) + 1;
    *y = (rand() % (ALTURA_JANELA - 1)) + 1;
}

// Desenha bolacha
void desenhaBolacha(int x, int y) {
    gotoxy(x, y);
    printf("%c", BOLACHA);
}

// Atualiza placar
void atualizaPlacar(int placar) {
    gotoxy(1, 19);
    printf("Placar %4d", placar);
}

// Atualiza fase
void atualizaFase(int fase) {
    gotoxy(1, 20);
    printf("Fase   %4d", fase);
}

// Função principal
int main(void) {
	int col, lin;                // Coordenadas da bolacha
	int i;                       // Usada em iterações
	int qtdBolachasComidas = 1;  // Quantidade de bolachas comidas
    int direcao = DIREITA;       // Define a direção da cobra
    int cobrax[300] = {1, 2};    // Array para armazenamento dos gomos da cauda da cobra na coordenada x
    int cobray[300] = {7, 7};    // Array para armazenamento dos gomos da cauda da cobra na coordenada y
    char tecla = ' ';            // Tecla pressionada
    bool colidiuParede = false;  // Booleano que indica se colidiu com parede
    bool colidiuCauda = false;   // Booleano que indica se colidiu com a própria cauda
    int velocidade = 100;        // Define a velocidade da cobra
    int fase = 1;                // Define a fase do jogo
    cursor(false);

    // Desenha lateral esquerda e direita
    for (i = 0; i < ALTURA_JANELA; i++) {
        gotoxy(0, i);
        printf("%c", PAREDE);
        gotoxy(LARGURA_JANELA, i);
        printf("%c", PAREDE);
    }

    // Desenha lateral superior e inferior
    for (i = 0; i <= LARGURA_JANELA; i++) {
        gotoxy(i, 0);
        printf("%c", PAREDE);
        gotoxy(i, ALTURA_JANELA);
        printf("%c", PAREDE);
    }

    // Inicializa randomização
    srand(time(NULL));

    // Gera posição da primeira bolacha
    geraPosBolacha(&col, &lin);
    desenhaBolacha(col, lin);

    // Atualiza placar e fase do jogo
    atualizaPlacar(0);
    atualizaFase(fase);

    // Laço principal
    while (tecla != ESC && !colidiuParede && !colidiuCauda) {
        while (!colidiuParede && !colidiuCauda && tecla != ESC && !(tecla = kbhit())) {

            // Monta cauda da cobra
            for (i = qtdBolachasComidas; i > 0; i--) {
                cobrax[i] = cobrax[i - 1];
                cobray[i] = cobray[i - 1];
            }

            // Define direção da cobra
            if (direcao == ESQUERDA) cobrax[0]--;
            if (direcao == ACIMA)    cobray[0]--;
            if (direcao == DIREITA)  cobrax[0]++;
            if (direcao == ABAIXO)   cobray[0]++;

            // Apaga último gomo da cauda da cobra
            gotoxy(cobrax[qtdBolachasComidas], cobray[qtdBolachasComidas]);
            printf(" ");

            // Colisão da cabeça da cobra com a bolacha
            if (col == cobrax[0] && lin == cobray[0]) {
                atualizaPlacar(qtdBolachasComidas);
                qtdBolachasComidas++;
                geraPosBolacha(&col, &lin);
                desenhaBolacha(col, lin);

                // Aumenta a velocidade a cada 5 bolachas comidas
                if (qtdBolachasComidas % 5 == 0 && velocidade > 30) {
                    velocidade-=5;
            	    atualizaFase(fase++);
			    }
            }

            // Desenha cabeça da cobra
			gotoxy(cobrax[0], cobray[0]);
            printf("%c", COBRA);

            Sleep(velocidade);

            // Colisão com a própria cauda
            for (i = 1; i < qtdBolachasComidas; i++) {
                if (cobrax[0] == cobrax[i] && cobray[0] == cobray[i]) {
                	colidiuCauda = true;
				}
            }

            // Colisão com parede
            if (cobray[0] == 0 || cobray[0] == ALTURA_JANELA || cobrax[0] == 0 || cobrax[0] == LARGURA_JANELA) {
            	colidiuParede = true;
			}
        }

        if (tecla != ESC && !colidiuParede && !colidiuCauda) {
        	tecla = getch();
            direcao = tecla;
		}
    }

    gotoxy(1, 21);

    if (colidiuParede || colidiuCauda) {
        printf("Fim de Jogo. Voce Perdeu! Tecle ENTER ");
	}
	else {
	    printf("Fim de Jogo! Tecle ENTER ");
	}

	getch();
    return 0;
}
