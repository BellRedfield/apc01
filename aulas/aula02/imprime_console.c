#include <stdio.h> // biblioteca de entrada e saida no console

int main() {
  // imprime um texto na tela
  printf("um texto qualquer entre aspas duplas\n");

  // imprime um numero inteiro 
  printf("%i\n", 10);
  printf("%i %i\n", 50, 100);
  printf("%5i\n", 1);
  printf("%05i%%\n", 21); // 2 % para aparecer ele msm

  // imprime um numero decimal
  printf("%.2f\n", 8.5);
  printf("%.3f\n", 3.14159);
  printf("%8.2f\n", 110.5);
  printf("%8.2f\n", 2556.86);

  //imprime caractere

  printf("%c\n", 'A'); // 
  printf("%c\n", 68); // ascii table, letra D


  // imprime um string
  printf("%s\n", "Bah noite");
  printf("%30s !\n", "quero cafe");
  printf("%-30s!\n", "quero cafe");

  
  
  return 0;
}