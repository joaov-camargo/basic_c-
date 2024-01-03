/*
    using_function_strcpy.cpp: Entendendo mais sobre atribuição de string em uma variável.
    Escrito por: João Camargo - FAM Online
    Data: 03/jan/2024 - v1.0
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
    char linguagem[20];
    
    strcpy(linguagem, "Abcdef");
    

    
    printf("Escrito: %s", linguagem);
}