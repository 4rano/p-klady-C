#include <stdio.h>
#include <stdlib.h>

// Funkce pro odstranění bílých znaků z řetězce
void odstranBileZnaky(char *retezec) {
    int i = 0;
    int j = 0;

    // Projdi řetězec
    while (retezec[i] != '\0') {
        // Pokud je znak bílý, nepřidáme ho do upraveného řetězce
        if (!(retezec[i] == ' ' || retezec[i] == '\t' || retezec[i] == '\n' || retezec[i] == '\r')) {
            retezec[j] = retezec[i];
            j++;
        }
        i++;
    }

    // Ukončení upraveného řetězce nulovým znakem
    retezec[j] = '\0';
}

int main() {
    char retezec[1000];  // Předpokládáme, že maximální délka řetězce je 1000

    // Získej vstup od uživatele
    printf("Zadejte řetězec: ");
    fgets(retezec, sizeof(retezec), stdin);

    // Odstraň bílé znaky z řetězce
    odstranBileZnaky(retezec);

    // Vypiš upravený řetězec
    printf("Řetězec bez bílých znaků: %s\n", retezec);

    return 0;
}
