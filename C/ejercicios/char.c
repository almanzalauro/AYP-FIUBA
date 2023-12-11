#include <stdio.h>

int main()
{
    char let1, let2, aux;
    char i;
    
    printf("Ingrese la primer letra:\n");
    fflush(stdin);
    scanf("%c",&let1);
    printf("Ingrese la segunda letra:\n");
    fflush(stdin);
    scanf("%c",&let2); 
    if(let2<let1){
        aux=let1;
        let1=let2;
        let2=aux;
    }
    for(i=let1; i<=let2; i++){
        printf(" :%c\n",i);
    }
    
    return 0;
}