#include <stdio.h>

int main()
{
   
    int i, incremento, num1,num2;
    incremento=0;
    printf("Ingrese el numero inicial\n");
    scanf("%i",&num1);

    printf("\n ingrese hasta el numero final\n");
    scanf("%i",&num2);

    printf("\nIngrese cel valor del incremento para estos numeros\n");
    scanf("%i",&incremento);

    for(i=num1; i<= num2; i+=incremento)
    {
        printf("\n %i ", i);
    }

    return 0;
}