#include <stdio.h>
int phanTu(int arr[], int size, int giaTri){
    for(int i=0; i<size; i++){
        if (arr[i] == giaTri){
            return i;
        }
    }
    return -1; 
}
int main(){
    int arr[] = {6,8, 22,9,7,31};
    int size=sizeof(arr)/sizeof(arr[0]);
    int giaTri=31;
    int index=phanTu(arr, size, giaTri);

    if(index!=-1){
        printf("%d\n", index);
    }else{
        printf("Khong tim thay phan tu %d\n", giaTri);
    }
    return 0;
}

