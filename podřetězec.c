#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Funkce pro ověření, zda je podřetězec obsažen v řetězci
bool obsahujePodretezec(char *retezec, char *podretezec) {
    while (*retezec != '\0') {
        char *pomocnyRetezec = retezec;
        char *pomocnyPodretezec = podretezec;

        // Porovnej znaky v obou řetězcích, dokud se shodují
        while (*pomocnyPodretezec != '\0' && *pomocnyRetezec == *pomocnyPodretezec) {
            pomocnyRetezec++;
            pomocnyPodretezec++;
        }

        // Pokud dojde k neshodě, přesuň se na další znak v původním řetězci
        if (*pomocnyPodretezec == '\0') {
            return true;  // Nalezen podřetězec
        }

        retezec++;
    }

    return false;  // Podřetězec nenalezen
}

int main() {
    char retezec[100], podretezec[100];  // Předpokládáme, že maximální délka řetězce je 100

    // Získej vstup od uživatele
    printf("Zadejte řetězec: ");
    scanf("%s", retezec);

    printf("Zadejte podřetězec: ");
    scanf("%s", podretezec);

    // Zjisti, zda je podřetězec obsažen v řetězci
    if (obsahujePodretezec(retezec, podretezec)) {
        printf("Podřetězec je obsažen v řetězci.\n");
    } else {
        printf("Podřetězec není obsažen v řetězci.\n");
    }

    return 0;
}
