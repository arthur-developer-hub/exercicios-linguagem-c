#include <stdio.h>

int main(){
    int num;
    num = 15;

    if (num % 5 == 0 && num % 3 == 0){
        printf("O número é divisivel por 3 e 5");
    }
    else{
        printf("O número não é divisivel por 3 e 5");
    }
}