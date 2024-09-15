#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero,originalNumero,digito,soma=0,numeroDigitos=0,temp;

    printf("Digite um numero inteiro:");
    scanf("%d",&numero);

    originalNumero=numero;
    temp=numero;
    while(temp!=0){
        numeroDigitos++;
        temp=temp/10;
    }
    while(numero!=0){
        digito=numero%10;
        int potencia=1;
        int i=0;
        while(i<numeroDigitos){
            potencia=potencia*digito;
            i++;
        }
        soma=soma+potencia;
        numero=numero/10;
    }

    if(soma==originalNumero){
        printf("%d eh um numero de Armstrong",originalNumero);
    }else{
    printf("%d nao eh um numero de Armstrong",originalNumero);
    }
    return 0;
}
