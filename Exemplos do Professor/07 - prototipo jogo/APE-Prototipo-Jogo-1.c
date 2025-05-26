/**
    Programa: APE-Prototipo-Jogo-1.c
    Autor: Professor Sandro Teixeira Carvalho
    Objetivo: Incentivar o estudo da lógica de programação e melhorar
              a compreensão das estruturas de decisão e de repetição.
    Este programa movimenta um caractere pela tela
	conforme as teclas de direção do teclado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>

#define ESC 27
#define ACIMA 72
#define ABAIXO 80
#define DIREITA 77
#define ESQUERDA 75
#define MAXLIN 24
#define MAXCOL 79
#define JOGADOR 1  // 0xDB 001 0x02 219 (1 = carinha, se não utilizar system color)
#define TITULO "Use as setas do teclado para mover a figura - <ESC> finaliza"

void gotoxy(short, short);
void clrscr(void);
void cursor(bool);

int main(void) {
    short lin = 12, col = 40;  // controlam a linha e coluna da figura
    short tecla;               // código da tecla pressionada
    bool sair = false;         // controla o laço while principal de execução do programa

    SetConsoleTitleA(TITULO);
	// system("color 0E");
    clrscr();
    setlocale(LC_ALL, "Portuguese");
    cursor(false);

    while (!sair) {
          gotoxy(col, lin);
          printf("%c", JOGADOR);
          tecla = getch();
          gotoxy(col, lin);
          printf(" ");

          switch (tecla) {
              case ACIMA:    lin--;
                             if (lin < 0) lin = 0;
                             break;
              case ABAIXO:   lin++;
                             if (lin > MAXLIN) lin = MAXLIN;
                             break;
              case ESQUERDA: col--;
                             if (col < 0) col = 0;
                             break;
              case DIREITA:  col++;
                             if (col > MAXCOL) col = MAXCOL;
                             break;
              case ESC:      sair = true;
          }
    }

    gotoxy(0, 0);
    printf("Tecle ESC para fechar esta janela ");
    while (getch() != ESC);
    return 0;
}

// ----------------------------------------------------------------------------
// Posiciona o cursor do console nas coordenadas coluna x e linha y
void gotoxy(short x, short y) {
	HANDLE hConsoleOutput;
	COORD Cursor_Pos = {x, y};
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
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
