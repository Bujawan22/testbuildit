#include <stdio.h>

int main(){
    float celcius, reamur, fahrenheit, kelvin;
    printf("masukkan angka yang dinginkan");
    scanf("%f", &celcius);

    reamur = 4.0 / 5.0 * celcius;
    fahrenheit = 9.0/5.0 * celcius + 32;
    kelvin = celcius + 273;

    printf("%.5f %.5f %.5f", reamur, fahrenheit, kelvin);
    return 0;
}