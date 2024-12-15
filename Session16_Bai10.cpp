#include <stdio.h>

void deleteElement(int *arr, int *size, int position);

int main(){
    int arr[100] = {1,2,3,4,5};
    int size = 5;
    int position;
    printf("Phan tu: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap vi tri can xoa (0 - %d): ", size-1);
    scanf("%d", &position);
    deleteElement(arr, &size, position);
    printf("Mang sau khi xoa phan tu: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
void deleteElement(int *arr, int *size, int position){
    for(int i=position; i<*size-1; i++){
        arr[i] = arr[i+1];
    }
    (*size)--;
}
