#include <stdio.h>

int main(){
    int num;
    num = 80;

    if(num % 10 == 0){
    printf ("O número é divisivel por 10");
    }
    else if(num % 5 == 0){
    printf ("O número é divisivel por 5");
    }
    else if(num % 2 == 0){
    printf ("O número é divisivel por 2");
    }
    else{
        printf("O número não é divisivel por nenhum destes.");
    }
}