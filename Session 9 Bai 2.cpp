#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int array[MAX_SIZE]={1,2,3,4,5,6,7,8,9,10}; 
    int currentLength = 10; 
    printf("Mang ban dau: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int valueInput,addIndex;
    printf("Nhap vi tri can them: ");
    scanf("%d", &addIndex);
    // xet truong hop cua addindex
    if (addIndex < 0 || addIndex > currentLength) {
    	printf("khong hop le");
    } else{
    	printf("Nhap gia tri can them: ");
    scanf("%d", &valueInput);
    // them phan tu
        array[addIndex] = valueInput;
    printf("Mang sau khi them: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

    return 0;
}