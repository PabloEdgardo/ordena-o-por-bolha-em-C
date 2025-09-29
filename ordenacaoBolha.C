#include <stdio.h>
#include <stdbool.h>

void printArray(int arr[], int n, const char* label) {
    printf("%s", label);
    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n - 1) printf(", ");
    }
    printf("\n");
}

int main() {
    int lista[] = {10,9,8,7,5,3,2,4};
    int n = sizeof(lista)/sizeof(lista[0]);
    bool swap = true;

    printArray(lista, n, "array inicial: ");
    printf("\n");

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
    
    printArray(lista, n,"array final: "); 

    printf("\n");
}