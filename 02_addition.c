#include <stdio.h>

int main(void) {
  // Willkommenstext, \n neue Zeile
  printf("Willkommen zum Addierer!\n\n");
  printf("Geben Sie bitte Ihre erste Zahl ein...\n");
  // Definieren von Variablen
  int a, b, summe;
  // User Input abwarten, %d definiert integer
  scanf("%d %d", &a, &b);
  // Zusammenrechnen
  summe = a + b;
  // Ausgabe von Ergebnis
  printf("Die Summe der Eingabe ergibt %d\n", summe);
  return 0;
}
