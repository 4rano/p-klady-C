#include <stdio.h>
#include <stdlib.h>


// Funkce pro výpočet délky řetězce
int spocitejDelkuRetezce(char *retezec) {
    int delka = 0;

    // Projdi řetězec, dokud nenarazíš na nulový znak (konec řetězce)
    while (retezec[delka] != '\0') {
        delka++;
    }

    return delka;
}

int main() {
    char retezec[100];  // Předpokládáme, že maximální délka řetězce je 100

    // Získej vstup od uživatele
    printf("Zadejte řetězec: ");
    scanf("%s", retezec);

    // Spočítej délku řetězce
    int delka = spocitejDelkuRetezce(retezec);

    // Vypiš délku řetězce
    printf("Délka řetězce je: %d\n", delka);

    return 0;
}
