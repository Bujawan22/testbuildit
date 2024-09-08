#include <stdio.h>

int main(){
    int angka;
    scanf("%d", &angka);

    if(angka%2==1){
        printf("Ganjil");
    } else{
        printf("Genap");
    }
    return 0;
}