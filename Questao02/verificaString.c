#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char texto[250];
    int contador = 0, localizador;

    printf("Digite um texto: \n");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    for (localizador = 0; texto[localizador] != '\0'; localizador++){
        if(texto[localizador] == 'a' || texto[localizador] == 'A'){
            contador++;
        }
    }

    if(contador > 0){
        printf("A letra 'a' apareceu %d vezes no texto digitado. \n", contador);
    } else{
        printf("A letra 'a' não aparece no texto digitado. \n");
    }

    return 0;
}