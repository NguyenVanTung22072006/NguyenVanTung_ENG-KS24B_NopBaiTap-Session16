#include <stdio.h>

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x=22;
	int y=7;
	printf("Truoc khi doi:\n");
	printf("x = %d\ny = %d\n", x, y);
	swap(&x, &y);
	printf("Sau khi doi:\n");
    printf("x = %d\ny = %d\n", x, y);
	
	return 0;
}
