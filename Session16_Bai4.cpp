#include <stdio.h>

void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        printf("Phan tu thu %d: %d\n", i, *(arr+i));
    }
}
int main(){
    int array[] = {7,8,9,22,1};
    int size = sizeof(array)/sizeof(array[0]);
    printArray(array, size);

    return 0;
}
