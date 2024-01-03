/*
    learning_command_ifElse.cpp: Entendendo melhor sobre if e else no c++.
    Escrito por: João Camargo - FAM Online
    Data: 03/jan/2024 - v1.0
*/

#include <stdio.h>

int main( )
{
  float nota1, nota2, media;
  printf("\n Informe as duas notas obtidas: ");
  scanf("%f %f", &nota1, &nota2);
  media = (nota1 + nota2) / 2;
  if ( media >= 7.0 ) printf ("\n Aprovado");
  else printf ("\n Reprovado");
}