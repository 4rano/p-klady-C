#include <stdio.h>
#include <stdlib.h>

// Funkce pro převod malých písmen na velká písmena
void prevedNaVelkaPismena(char *retezec) {
    int i = 0;

    // Projdi řetězec, dokud nenarazíš na nulový znak (konec řetězce)
    while (retezec[i] != '\0') {
        // Pokud je znak malé písmeno, převeď ho na velké písmeno
        if (retezec[i] >= 'a' && retezec[i] <= 'z') {
            retezec[i] = retezec[i] - 'a' + 'A';
        }
        i++;
    }
}

int main() {
    char retezec[100];  // Předpokládáme, že maximální délka řetězce je 100

    // Získej vstup od uživatele
    printf("Zadejte řetězec: ");
    scanf("%s", retezec);

    // Převeď malá písmena na velká písmena
    prevedNaVelkaPismena(retezec);

    // Vypiš upravený řetězec
    printf("Řetězec s velkými písmeny: %s\n", retezec);

    return 0;
}
