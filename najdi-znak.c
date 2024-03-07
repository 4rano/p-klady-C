#include <stdio.h>
#include <stdlib.h>

// Funkce pro nalezení pozice znaku v řetězci
int najdiZnak(char *retezec, char hledanyZnak) {
    int pozice = -1;  // Pokud znak není nalezen, nastavíme pozici na -1

    // Projdi řetězec, dokud nenarazíš na nulový znak (konec řetězce) nebo nalezení hledaného znaku
    for (int i = 0; retezec[i] != '\0'; i++) {
        if (retezec[i] == hledanyZnak) {
            pozice = i;  // Nalezení pozice hledaného znaku
            break;       // Ukončení cyklu, protože jsme našli hledaný znak
        }
    }

    return pozice;
}

int main() {
    char retezec[100];  // Předpokládáme, že maximální délka řetězce je 100
    char hledanyZnak;

    // Získej vstup od uživatele
    printf("Zadejte řetězec: ");
    scanf("%s", retezec);

    printf("Zadejte hledaný znak: ");
    scanf(" %c", &hledanyZnak);  // Používáme mezeru před %c pro ignorování bílých znaků a nového řádku

    // Najdi pozici hledaného znaku v řetězci
    int pozice = najdiZnak(retezec, hledanyZnak);

    // Vypiš výsledek hledání
    if (pozice != -1) {
        printf("První výskyt znaku '%c' v řetězci je na pozici: %d\n", hledanyZnak, pozice);
    } else {
        printf("Znak '%c' nebyl nalezen v řetězci.\n", hledanyZnak);
    }

    return 0;
}
