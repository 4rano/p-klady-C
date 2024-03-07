#include <stdio.h>
#include <stdlib.h>

// Funkce pro obrácení řetězce
void obratRetezec(char *retezec) {
    int i = 0;
    int j = 0;

    // Najdi délku řetězce
    while (retezec[j] != '\0') {
        j++;
    }

    j--;  // Snížíme j o 1, abychom se dostali na poslední platný index

    // Prohoď znaky od začátku a konce, dokud se indexy nepotkají
    while (i < j) {
        char temp = retezec[i];
        retezec[i] = retezec[j];
        retezec[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char retezec[100];  // Předpokládáme, že maximální délka řetězce je 100

    // Získej vstup od uživatele
    printf("Zadejte řetězec: ");
    scanf("%s", retezec);

    // Obrátí řetězec
    obratRetezec(retezec);

    // Vypiš obrácený řetězec
    printf("Obrácený řetězec: %s\n", retezec);

    return 0;
}
