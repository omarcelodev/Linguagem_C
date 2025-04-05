#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    for(;;){
        printf("Marcelo\n");
    }

    return 0;
}
