#include <stdio.h>

#define MAX_SIZE 100 

int main() {
    int array[MAX_SIZE]; 
    int currentLength = 0; 
    printf("Nhap so luong phan tu ban dau (toi da %d): ", MAX_SIZE);
    scanf("%d", &currentLength);
    if (currentLength <= 0 || currentLength > MAX_SIZE) {
        printf("So phan tu k hop le\n");
    }
    for (int i = 0; i < currentLength; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Mang ban dau: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int valueInput,addIndex;
    printf("Nhap gia tri can them: ");
    scanf("%d", &valueInput);
    printf("Nhap vi tri can them: ");
    scanf("%d", &addIndex);
    // xet truong hop cua addindex
    if (addIndex < 0 ) {
    	addIndex = 0;
    } else if(addIndex > currentLength){
                    addIndex = currentLength;
    }
        for (int i = currentLength-1; i >= addIndex; --i) {
            array[i+1] = array[i];
        }
        array[addIndex] = valueInput;
        currentLength++;
    printf("Mang sau khi them: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}