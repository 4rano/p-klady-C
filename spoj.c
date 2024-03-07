#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Funkce pro spojení dvou řetězců
void spojRetezce(char *vysledek, char *retezec1, char *retezec2) {
    strcpy(vysledek, retezec1);  // Zkopíruj obsah prvního řetězce do výsledného řetězce
    strcat(vysledek, retezec2);  // Přidej obsah druhého řetězce na konec výsledného řetězce
}

int main() {
    char retezec1[100], retezec2[100], vysledek[200];  // Předpokládáme, že maximální délka řetězců je 100

    // Získej vstup od uživatele
    printf("Zadejte první řetězec: ");
    scanf("%s", retezec1);

    printf("Zadejte druhý řetězec: ");
    scanf("%s", retezec2);

    // Spoj řetězce
    spojRetezce(vysledek, retezec1, retezec2);

    // Vypiš výsledek spojení
    printf("Spojený řetězec: %s\n", vysledek);

    return 0;
}
