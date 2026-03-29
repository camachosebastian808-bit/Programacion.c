/*
Autor: Carlos Salazar
Fecha: 29/03/2026
Descripcion: Programa para contar desde un número de inicio hasta un número de fin con un incremento específico, utilizando un bucle for. El programa valida que el número de fin sea mayor que el número de inicio y que el incremento sea mayor a 0.
*/
#include <stdio.h>
 int main(){
    int contador, inicio, fin, incremento;
    printf("Ingrese el inicio del conteo=\n");
    scanf("%d",&inicio);
    do {
    printf("Ingrese el fin del conteo=\n");
    scanf("%d",&fin);
    if (fin <= inicio){
        printf("El fin del conteo debe ser mayor al inicio\n");
    }
    } while (fin <= inicio);
    do {
    printf("Ingrese el incremento del conteo=\n");
    scanf("%d",&incremento);
    if (incremento <= 0){
        printf("El incremento debe ser mayor a 0\n");
    
    }
    } while (incremento <= 0);
    for (contador = inicio; contador <= fin; contador+=incremento){
        printf("%d\n",contador);
    }
    return 0;
 }