#include <stdio.h>
#include <stdbool.h>

int main() {
    int lista[] = {10,9,8,7,5,3,2,4};
    int n = sizeof(lista)/sizeof(lista[0]);
    bool swap = true;
    printf("array inicial: ");

    for(int i;i < n; i ++) {printf("%d, ",lista[i]);}
    printf("\n\n");

    int count = 1;
    while (swap == true) 
    {
        swap = false;
        printf("iteração %d: \n\n", count++);
        for (int i = 0; i < (n - 1); i++)
         {
            if (lista[i] > lista[i + 1])
            {  
                int temp = lista[i];
                lista[i] = lista[i + 1];
                lista[i + 1] = temp;
                swap = true;

                // Mostrar o movimento
                printf("Troca posição %d e %d: ", i+1, i+2);
                for(int j = 0; j < n; j++) {
                    printf("%d", lista[j]);
                    if(j < n-1) printf(", ");
                }
                printf("\n");
            }   
        }
         if(!swap) {
            printf("Nenhuma troca necessária - array ordenado!\n");
        }
        printf("\n");
    }
    
    printf("array final: ");

    for(int i;i < n; i ++) 
    {
        printf("%d",lista[i]);
        if(i < n-1) printf(", ");
    }

    printf("\n");
}