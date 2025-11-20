#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

// funzione per generare numeri casuali tra gli intervalli passati alla funzione
int generaNumeroCasuale(int min, int max) {
    return rand() % (max - min + 1) + min;
}


//funzione per stampare l'array
void stampaArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d \n", arr[i]);
    }
    printf("\n");
}

//funzione per ordinare l'array
void sortArray(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    int supp;
    int numeri[SIZE];

    for(int i = 0; i < SIZE; i++) {
        numeri[i] = generaNumeroCasuale(0, 1000); 
        supp = numeri[i];
        //ciclio per controllare doppioni
        for(int j = 0; j < i; j++) {
            if(numeri[j] == supp) {
                i--; // Decrementa i per rigenerare il numero
                break;
            }            
        }
    }
    sortArray(numeri, SIZE);
    stampaArray(numeri, SIZE);

    return 0;
}