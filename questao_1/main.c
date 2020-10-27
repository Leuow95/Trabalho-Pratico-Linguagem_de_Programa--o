//TAREFA 1 c

#include<stdio.h>
#include<stdlib.h>

void menu(){
    printf("Item | Produto         | Codigo | Preco Unitario \n");
    printf(" 1   | Cachorro-quente | 100    | 5.00 \n");
    printf(" 2   | X-salada        | 101    | 8.79 \n");
    printf(" 3   | X-bacon         | 102    | 9.99 \n");
    printf(" 4   | Misto           | 103    | 6.89 \n");
    printf(" 5   | Salada          | 104    | 4.80 \n");
    printf(" 6   | Agua            | 105    | 3.49 \n");
    printf(" 7   | Refrigerante    | 106    | 4.99 \n");
}

void pedido(){
    //Variaveis pra receber as entradas dos pedidos
    int entrada, quantidade;
    int i = 0;
    float valor_final = 0.0;
    //Cada posicao do vetor 'pedido[]' equivale a um item do cardapio,
    //e sera multiplicado posteriormente pra imprimir os itens pedidos
    int pedido[6] = {0, 0, 0, 0, 0, 0, 0};
    
    do{
        printf("Digite o item do pedido:\n");
        scanf_s("%d", &entrada); 
        
        if(entrada < 1 || entrada > 7){
            printf("---------------------\n");
            printf("Pedido encerrado!\n");
            break;
        }
        else {            
            switch (entrada){
                case 1:
                    printf("Quantos Cachorro-quentes voce deseja?\n");
                    scanf("%d", &quantidade);
                    valor_final += (float)(5.00*quantidade);
                    pedido[0] += quantidade;
                    break;
                case 2:
                    printf("Quantos X-saladas voce deseja?\n");
                    scanf("%d", &quantidade);
                    valor_final += (float)(8.79*quantidade);
                    pedido[1] += quantidade;
                    break;
                case 3:
                    printf("Quantos X-bacons voce deseja?\n");
                    scanf("%d", &quantidade);
                    valor_final += (float)(9.99*quantidade);
                    pedido[2] += quantidade;
                    break;
                case 4:
                    printf("Quantos Mistos voce deseja?\n");
                    scanf("%d", &quantidade);
                    valor_final += (float)(6.89*quantidade);
                    pedido[3] += quantidade;
                    break;
                case 5:
                    printf("Quantas Saladas voce deseja?\n");
                    scanf("%d", &quantidade);
                    valor_final += (float)(4.80*quantidade);
                    pedido[4] += quantidade;
                    break;
                case 6:
                    printf("Quantas Aguas voce deseja?\n");
                    scanf("%d", &quantidade);
                    valor_final += (float)(3.49*quantidade);
                    pedido[5] += quantidade;
                    break;
                case 7:
                    printf("Quantos Refrigerantes voce deseja?\n");
                    scanf("%d", &quantidade);
                    valor_final += (float)(4.99*quantidade);
                    pedido[6] += quantidade;
                    break;
            }     
        }          
    }
    while(entrada >= 1 && entrada <= 7);
    printf("%.2f", valor_final);    
}

int main(){
    //Meu RU é 3360021
    menu(); //exibe as opções do cardapio
    pedido();
    //calculadora_conta();
    return 0;
}