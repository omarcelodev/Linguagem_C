#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

     while (1){
        printf("Marcelo\n");

        if(kbhit()){
            char tecla = getch();

            if(tecla == 27){
                break;
            }
        }
     }

    return 0;
}
