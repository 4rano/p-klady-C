#include <stdio.h>
#include <stdlib.h>

// Funkce pro porovnání dvou řetězců
int porovnejRetezce(char *retezec1, char *retezec2) {
    // Projdi oba řetězce, dokud narazíš na nulový znak nebo dokud jsou znaky stejné
    while (*retezec1 != '\0' && *retezec1 == *retezec2) {
        retezec1++;
        retezec2++;
    }

    // Porovnej znaky, vrati 0, pokud jsou řetězce stejné
    return (*retezec1 - *retezec2);
}

int main() {
    char retezec1[100], retezec2[100];  // Předpokládáme, že maximální délka řetězců je 100

    // Získej vstup od uživatele
    printf("Zadejte první řetězec: ");
    scanf("%s", retezec1);

    printf("Zadejte druhý řetězec: ");
    scanf("%s", retezec2);

    // Porovnej řetězce
    int vysledek = porovnejRetezce(retezec1, retezec2);

    // Vypiš výsledek porovnání
    if (vysledek == 0) {
        printf("Řetězce jsou stejné.\n");
    } else {
        printf("Řetězce jsou různé.\n");
    }

    return 0;
}
