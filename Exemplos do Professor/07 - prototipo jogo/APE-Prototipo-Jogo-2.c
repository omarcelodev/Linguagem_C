/**
    Programa: APE-Prototipo-Jogo-2.c
    Autor: Professor Sandro Teixeira Carvalho
    Objetivo: Incentivar o estudo da lógica de programação e melhorar a
              compreensão das estruturas de decisão e de repetição.
    Este programa movimenta um caractere pela tela ininterruptamente
	conforme as teclas de direção do teclado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>

#define ESC 27
#define ACIMA 72
#define ABAIXO 80
#define DIREITA 77
#define ESQUERDA 75
#define MAXLIN 28  // 24
#define MAXCOL 85  // 79
#define JOGADOR 219  // 0xDB 001 0x02 219 (1 = carinha, se não utilizar system color)
#define TITULO "Use as setas do teclado para mover a figura - <Pause> pausa <ESC> finaliza"

#define CSE 0xC9  // Canto superior esquerdo
#define LH 0xCD   // Linha horizontal
#define CSD 0xBB  // Canto superior direito
#define LV 0xBA   // Linha vertical
#define CIE 0xC8  // Canto inferior esquerdo
#define CID 0xBC  // Canto inferior direito

void gotoxy(short, short);
void clrscr(void);
void cursor(bool);
void desenhaJanela(void);

int main(void) {
    short lin = 12, col = 40;
    short tecla, teclaAnterior;
    bool sair = false;
    clock_t inicio;
    short int velocidade = 65;
    const short int VELOCIDADEV = 125;
    const short int VELOCIDADEH = 65;

    SetConsoleTitleA(TITULO);
	system("color 0E");
    clrscr();
    cursor(false);
    desenhaJanela();
    tecla = DIREITA;
    inicio = clock();

    while (!sair) {
          gotoxy(col, lin);

          if (kbhit())
              tecla = getch();

          if (clock() - inicio <= velocidade) {
              printf("%c", JOGADOR);
          }
          else {
              printf(" ");
              inicio = clock();

              switch (tecla) {
                  case ACIMA:    lin--;
                                 teclaAnterior = tecla;
                                 velocidade = VELOCIDADEV;
                                 if (lin <= 0) {
                                     lin = 1;
                                     tecla = ABAIXO;
                                 }
                                 break;
                  case ABAIXO:   lin++;
                                 velocidade = VELOCIDADEV;
                                 teclaAnterior = tecla;
                                 if (lin >= MAXLIN) {
                                     lin = MAXLIN;
                                     tecla = ACIMA;
                                 }
                                 break;
                  case ESQUERDA: col--;
                                 velocidade = VELOCIDADEH;
                                 teclaAnterior = tecla;
                                 if (col <= 0) {
                                     col = 1;
                                     tecla = DIREITA;
                                 }
                                 break;
                  case DIREITA:  col++;
                                 velocidade = VELOCIDADEH;
                                 teclaAnterior = tecla;
                                 if (col > MAXCOL) {
                                     col = MAXCOL;
                                     tecla = ESQUERDA;
                                 }
                                 break;
                  case ESC:      sair = true;
                  default:       tecla = teclaAnterior;
              }
          }
    }

    gotoxy(01, 26);
    printf("Tecle ESC para fechar esta janela ");
    while (getch() != ESC);
    return 0;
}

// ----------------------------------------------------------------------------
// Desenha área limite do objeto que se move pela tela
void desenhaJanela(void) {
    short lin = 0, col = 0;

    gotoxy(0, 0);
    printf("%c", CSE);

    for (col = 1; col <= MAXCOL; col++)
        printf("%c", LH);

    printf("%c", CSD);
    gotoxy(0, 1);

    for (lin = 1; lin <= MAXLIN; lin++)
        printf("%c\n", LV);

    printf("%c", CIE);

    for (col = 1; col <= MAXCOL; col++)
        printf("%c", LH);

    for (lin = 1; lin <= MAXLIN; lin++) {
        gotoxy(MAXCOL + 1, lin);
        printf("%c", LV);
    }

    gotoxy(MAXCOL + 1, MAXLIN + 1);
    printf("%c", CID);
}

// ----------------------------------------------------------------------------
// Posiciona o cursor do console nas coordenadas coluna x e linha y
void gotoxy(short col, short lin) {
    COORD p = {col, lin};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

// ----------------------------------------------------------------------------
// Limpa a tela do console e posiciona o cursor na coluna 0 linha 0
void clrscr(void) {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = {0, 0};
	DWORD count;
	GetConsoleScreenBufferInfo(hStdOut, &csbi);
	FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
	SetConsoleCursorPosition(hStdOut, coord);
}

// ----------------------------------------------------------------------------
// Liga ou Desliga o cursor
void cursor(bool show) {
    HANDLE hConsoleOutput;
    CONSOLE_CURSOR_INFO structCursorInfo;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleCursorInfo(hConsoleOutput, &structCursorInfo);
    structCursorInfo.bVisible = show;
    SetConsoleCursorInfo( hConsoleOutput, &structCursorInfo );
}

// ----------------------------------------------------------------------------
// Fim de arquivo
