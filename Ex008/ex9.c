#include <stdio.h>
#include <stdbool.h>

int main(){
    int x=10;
    int y=5;
    bool z;

    z = x > y;

    if(z){
        printf("z recebeu verdadeiro ");
    }
    else{
        printf("z recebeu falso");
    }
    return 0;

}
