#include <stdio.h>

void ZeraArray(int array[], int limite){
    for(int i = 0; i < limite; i++){
        array[i] = 0;
    }
}

int main(){
    int ticketsReais, ticketsTotais, ticket, repetidos;
    int contaTickets[20000];

    while(1){
        repetidos = 0;
        ZeraArray(contaTickets, 20000);
        
        scanf("%d%d", &ticketsReais, &ticketsTotais);

        if(ticketsReais == 0 && ticketsTotais == 0){
            break;
        }

        for(int i = 0; i < ticketsTotais; i++){
            scanf("%d", &ticket);
            contaTickets[ticket - 1]++;
        }

        for(int i = 0; i < ticketsReais; i++){
            if(contaTickets[i] >= 2){
                repetidos++;
            }
        }
        
        printf("%d\n", repetidos);
    }

    return 0;
}