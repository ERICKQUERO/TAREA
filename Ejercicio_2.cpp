#include<stdio.h>
#include<stdlib.h>

int main(){

int x,y;
    printf("ingrse un  numero entero: ");
    scanf("%d",&x);
    printf("ingrse un segundo  numero entero: ");
    scanf("%d",&y);
        if((x%y)==0){
                printf("\n %d es divisible entre %d",x,y);


        }
        else if((y%x)==0){

                 printf("\n %d es divisible entre %d",y,x);

        }
        else{

            printf("\n %d no es divisible entre %d",y,x);
            printf("\n %d no es divisible entre %d",x,y);

        }
}
