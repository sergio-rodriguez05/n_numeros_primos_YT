#include <stdio.h>

//Programa que muestra los n primeros numeros primos
//Programa subido en github (enlace en descripción) :)
//Canal: @programaCionSencilla

int esPrimo(int num){
    if(num <= 1){
        return 0;

    }

    for(int i = 2; i * i <= num; i++){
        if (num % i == 0){
            return 0;
        }

    }
    return 1;
}

void imprimirPrimos(int n){
    int contador = 0;
    int num = 2;
    printf("Los primeros %d numeros primos son:\n");
    while(contador<n){
        if(esPrimo(num)){
            printf("%d\n", num);
            contador++;
        }
        num++;
    }
    printf("\n");
}

int main (){
    int n;
    printf("Cuantos n primeros numeros primos deseas mostrar: ");
    scanf("%d", &n);
    imprimirPrimos(n);
    return 0;
}
