#include <stdio.h>

#define MAX_SIZE 10

int main() {
    // Khai báo và gán giá trị cho mảng
    int array[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int currentLength = 10;

    // Hiển thị mảng ban đầu
    printf("Mang ban dau: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int deleteIndex;
                printf("Hay nhap vi tri can xoa:");
                scanf("%d", &deleteIndex);
                if(deleteIndex <0 || deleteIndex > currentLength - 1){
                    printf("vi tri can xoa ko hop le \n");
                } else{
                    // 1,2,3,4,5
                    for (int i = deleteIndex; i < currentLength-1; ++i) {
                        array[i] = array[i+1];
                    }
                    currentLength--;// giam kich thuoc mang 1 son vi
                    printf("Da them moi thanh cong \n");
                }
    printf("Mang sau khi da xoa: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}