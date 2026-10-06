#include <stdio.h>
#include <string.h>

int weryfikacja_hasla(char *input) {
    if(strcmp(input, "tajnehaslo123") == 0) {
        return 1;
    }
    return 0;
}

int main() {
    char haslo[64];

    printf("Wprowadź hasło: ");
    scanf("%63s", haslo);

    if(weryfikacja_hasla(haslo)) {
        printf("UDAŁO CI SIĘ WŁAMAĆ DO SYSTEMU!\n");
    } else {
        printf("NIEPOPRAWNE HASŁO\n");
    }

    return 0;
}
