#include <stdio.h>

int main(){
    int terbesar = -100000, angka;
    for(int i = 1 ; i <= 10 ; i++){
        scanf("%d", &angka);
        if(angka > terbesar){
            terbesar = angka;
        }
    }
    printf("%d", terbesar);
    return 0;
}