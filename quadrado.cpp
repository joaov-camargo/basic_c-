/*
    quadrado.cpp: Calcular o quadrado de um número inteiro.
    Escrito por: João Camargo - FAM Online
    Data: 03/jan/2024 - v1.0
*/

#include <stdio.h>
#include <conio.h>

main(){
    int num, quad;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    quad = num*num;
    printf("O quadrado de %d = %d", num, quad);
    printf("\nPressione qualquer tecla para finalizar");

    getch();
}