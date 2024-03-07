#include <stdio.h>
        #include <stdlib.h>

int main() {
char str1[100];
char str2[100];
char str3[100];
char str4[200];
int delka = 0,i = 0,rozdil = 0, delka2=0;
char znak;


    printf("Zadejte 1. retezec: ");
    scanf("%s", str1);

    printf("Zadejte 2. retezec: ");
    scanf("%s", str3);
    printf("Zadejte hledany znak: ");
    scanf(" %c", &znak);

            while (str1[delka] != '\0') {
                delka++;
            }
    rozdil=abs(delka-strlen(str3));
    strcpy(str2, str1);
    printf("Kopie retezce: %s\n", str2);
    printf("Delka retezce je: %d\n", delka);
    printf("Rozdil retezcu 1 a 2 je: %d\n", rozdil);
delka2=delka;
         while (str1[i] != '\0') {
        if (str1[i] == znak) {
            printf("Prvni vyskyt znaku '%c' je na pozici %d.\n", znak, i+1);
            goto sem;
        }
        i++;
    }
    printf("Znak '%c' nebyl nalezen v retezci.\n", (znak));
    sem:

     for (int i = 0; str3[i] != '\0'; i++) {
        str2[delka + i] = str3[i];
    }
    str2[delka + strlen(str3)] = '\0';
 printf("Spojene retezce: %s\n", str2);

     printf("Pozpatku: ");
    for (int j = delka2 - 1; j >= 0; j--) {
        printf("%c", str1[j]);
    }
            return 0;
        }
