#include <stdio.h>
#include <stdbool.h>
int main(void )
{
    bool cond1, cond21;
    cond1 = true; 
    cond21 = false;

    if (cond1)
    {
        if (cond21)
        {
            printf("Valor de cond1 = %d (BLOCO-2-2) \n", cond1);
            printf("Valor de cond21 = %d (BLOCO-2-2) \n", cond21);
        }
        else 
        {
            printf("Valor de cond1 = %d (BLOCO-2-1) \n", cond1);
            printf("Valor de cond21 = %d (BLOCO-2-1) \n", cond21);
        }
    } 
    else
    {
        printf("Valor de cond1 = %d (BLOCO-1) \n", cond1);
    } 
    printf("Valor de cond1 = %d (BLOCO-3) \n", cond1);
    printf("Valor de cond1 = %d (BLOCO-3) \n", cond21);
    return 0;
}