#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(const char *str) {
    int comprimento = strlen(str);
    int i, j;

    i = 0;
    j = comprimento - 1;

    while (i < j) {
        while (isspace(str[i]) && i < j) {
            i++;
        }
        while (isspace(str[j]) && i < j) {
            j--;
        }

        if (tolower(str[i]) != tolower(str[j])) {
            return 0; 
        }
        
        i++;
        j--;
    }

    return 1; 
}

int main() {
    char entrada[100]; 

    printf("Digite uma palavra ou frase: ");
    fgets(entrada, sizeof(entrada), stdin);

    if (entrada[strlen(entrada) - 1] == '\n') {
        entrada[strlen(entrada) - 1] = '\0';
    }

    if (ehPalindromo(entrada)) {
        printf("%s eh um palindromo.\n", entrada);
    } else {
        printf("%s nao eh um palindromo.\n", entrada);
    }

    return 0;
}
