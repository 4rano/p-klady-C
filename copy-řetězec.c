#include <stdio.h>
#include <stdlib.h>

// Funkce pro kopírování řetězce
void zkopirujRetezec(char *cilovyRetezec, const char *zdrojovyRetezec) {
    // Kopíruj znak po znaku, dokud nenarazíš na nulový znak (konec řetězce)
    while (*zdrojovyRetezec != '\0') {
        *cilovyRetezec = *zdrojovyRetezec;
        cilovyRetezec++;
        zdrojovyRetezec++;
    }

    // Přidej nulový znak na konec cílového řetězce
    *cilovyRetezec = '\0';
}

int main() {
    char zdrojovyRetezec[100];  // Předpokládáme, že maximální délka řetězce je 100
    char cilovyRetezec[100];

    // Získej vstup od uživatele
    printf("Zadejte zdrojový řetězec: ");
    scanf("%s", zdrojovyRetezec);

    // Zkopíruj obsah zdrojového řetězce do cílového řetězce
    zkopirujRetezec(cilovyRetezec, zdrojovyRetezec);

    // Vypiš cílový řetězec
    printf("Cílový řetězec po kopírování: %s\n", cilovyRetezec);

    return 0;
}
