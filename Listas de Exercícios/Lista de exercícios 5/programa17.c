#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int cont = 0;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    while(cont < 20){
        cont = cont + 1;
        printf("%d\n", cont);
    }
    return 0;
}
