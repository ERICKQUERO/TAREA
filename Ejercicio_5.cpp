#include <stdio.h>
#include <stdlib.h>

 main(){
    int boleto=75, adulto_mayor, edad, nino;


        printf("\t Precio de boleto es de 75 pesos ");
        printf("\n\n introduce tu edad:  ");
        scanf("%d",&edad);

        if(edad>60)
        {

            adulto_mayor= 75-(boleto*.55);

                printf("\nEl costo del boleto es de:%d",adulto_mayor);
        }
        else if(edad<13)
        {

            nino= 75-(boleto*.60);

                printf("\nEl costo del boleto es de:%d",nino);
        }
        else
        {

                printf("\n El costo del boleto es de:%d",boleto);
        }
}
