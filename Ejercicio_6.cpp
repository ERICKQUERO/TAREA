#include<stdio.h>
#include<stdlib.h>

int main(){
     float x,opt;



        printf("introduce un valor entero de numeros negativos a positivos: ");
        scanf("%f",&x);


                    if(x<=0){
                       opt=x+3;
                       printf ("f(x)=%f",opt);
                    }
            else if (x>0) {
                opt=(x*x)+(2*x);
                printf ("el resultado es: f(x)=%0.2f",opt);

            }

            }



