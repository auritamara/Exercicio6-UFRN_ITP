#include <stdio.h>
#include <string.h>

int main(void) {
  float c = 0;
  float f = 0;
  float k = 0;
  float valor;
  char graus[] = "";
  scanf ("%f %s", &valor, graus);
  if (strcmp(graus,"C") == 0){
    c = valor;
    f = (valor * 1.8) + 32;
    k = valor + 273.15;
    printf("Celsius: %.2f\n", c);
    printf("Farenheit: %.2f\n", f);
    printf("Kelvin: %.2f\n", k);
  }
  else if (strcmp(graus,"F") == 0){
    f = valor;
    c = (valor - 32) * 5/9; 
    k = c + 273.15;
    printf("Celsius: %.2f\n", c);
    printf("Farenheit: %.2f\n", f);
    printf("Kelvin: %.2f\n", k);
  }
  else if (strcmp(graus,"K") == 0){
    k = valor;
    c = valor - 273.15;
    f = (c * 1.8) + 32;
    printf("Celsius: %.2f\n", c);
    printf("Farenheit: %.2f\n", f);
    printf("Kelvin: %.2f\n", k);
  }  
  return 0;
}