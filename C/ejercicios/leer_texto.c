#include <stdio.h>
#include <stdlib.h>
int main()
{
    char letra;
    int total_consonantes = 0;
    int total_vocales = 0;
    printf("Ingrese la letra del texto en minúsculas (para terminar ponga .):\n");
    scanf("%c",&letra);
    fflush(stdin);
    while(letra != '.'){
        if(letra >= 'a' && letra <= 'z'){
            if(letra != 'a' && letra != 'e' && letra != 'i'&& letra != 'o'&& letra != 'u'){
                total_consonantes++;
            }
            else{
                total_vocales++;
            }
        }
        scanf("%c",&letra);
        fflush(stdin);
    }
    printf("La cantidad de vocales es de: %i y la cantidas de consonantes es: %d", total_vocales, total_consonantes);
return 0;
}