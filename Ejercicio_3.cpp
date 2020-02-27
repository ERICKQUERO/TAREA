#include<stdio.h>
#include<stdlib.h>
#define N 2

int main(){
    int x;

        printf("ingrese un numero entero: ");
        scanf("%d",&x);

        if((x%N)==0){
            printf("\n %d es par",x);
        }
        else if(((x-1)%N)==0){
            printf("\n %d es impar",x);
            if((x%3)==0){
                printf("\n %d es divisible entre 3",x);
            }
            else{
                printf("\n %d no es divisible entre 3",x);
            }
        }

}
