//TAREFA 1 c

#include<stdio.h>
#include<stdlib.h>

void menu(){
    printf("Item | Produto         | Codigo | Preco Initario \n");
    printf(" 1   | Cachorro-quente | 100    | 5.00 \n");
    printf(" 2   | X-salada        | 101    | 8.79 \n");
    printf(" 3   | X-bacon         | 102    | 9.99 \n");
    printf(" 4   | Misto           | 103    | 6.89 \n");
    printf(" 5   | Salaada         | 104    | 4.80 \n");
    printf(" 6   | Agua            | 105    | 3.49 \n");
    printf(" 7   | Refrigerante    | 106    | 4.99 \n");
}

void pedido(){
    //Variáveis pra receber as entradas dos pedidos
    int entrada;
    int i = 0;
    int pedido[6];
    
    do{
        scanf_s("%d", &entrada); 
        pedido[i] = entrada;
        i++;
    }

    while(entrada >= 0 && entrada <= 7 );

    printf("%d", pedido[6]);
    /* i = 0;
    for(i=0; i<=6; i++){
        printf("%d", pedido[i]);
    } */

}
int main(){
    //Meu RU é 3360021
    menu();
    pedido();
    //calculadora_conta();
    return 0;
}