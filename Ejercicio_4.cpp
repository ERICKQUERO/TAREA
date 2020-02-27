#include<stdio.h>
#include<stdlib.h>

int main(){

    int x,y;

    printf("Introducir el primer valor entero: ");
    scanf("%d",&x);
    printf("Introducir el segundo valor entero: ");
    scanf("%d",&y);

        if(x>y){
                printf("\n %d es mayor que %d.",x,y);
                    }
        else if(x<y){
                printf("\n %d es menor que %d.",x,y);
        }
        else if(x=y){
                printf("\n %d es igual que %d.",x,y);
        }
        else{
            printf("\n %d no es igual a %d",x,y);
        }


    }
