#include <stdio.h>
//#include <st>
//
//Kết hợp kiến thức từ các bài trước, xây dựng chương trình hiển thị và thực hiện các chức năng theo menu sau:
//
//MENU
//
//        Nhập vào mảng
//        Hiển thị mảng
//        Thêm phần tử
//        Sửa phần tử
//        Xóa phần tử
//        Thoát
//        Lựa chọn của bạn:


int main(void) {
    const int MAX_SIZE = 5; // tối đa 100 phần tử
    int arrayInt[MAX_SIZE]; // khai báo mảng 100 phần tử
    int size = 0; // kích thước thực tế mà nó lưu trữ
    // thiết kế chương trình theo đề bài
    while (1) {
        printf("==============MENU================\n");
        printf("1. Nhap phan tu cho mang\n");
        printf("2. HIen thi mang\n");
        printf("3. Them moi phan tu vao mang\n");
        printf("4. Sua gia tri \n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        int choice;
        printf("Hay nhap lua chon :");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // nhập giá trị cho mảng
                int n ;
                printf("Hay nhap so luong phan tu mang :");
                scanf("%d", &n);
                if (n <=0 || n> MAX_SIZE){
                    printf("Gia tri nhap vao ko hop le");
                    break;
                }
                // nhap lần lưt từng phần tử
                for (int i = 0; i < n; ++i) {
                    printf("Nhap Array[%d] = ",i+1);
                    scanf("%d", arrayInt+i);
                }
                size = n; // cập nhật lại kích thước của mảng
                break;
            case 2:
                // hiển thị mang
                if(size == 0){
                    printf("mang rong \n");
                    break;
                }
                printf("Cac phan tu trong mang la : \n");
                for (int i = 0; i < size; ++i) {
                    printf("%d ",arrayInt[i]);
                }
                printf("\n");
                break;
            case 3:
                // thêm mới
                // cần vị tri và giá trị cần thêm
                if(size == MAX_SIZE){
                    printf("Mang da day, ko them them nua\n");
                    break;
                }
                int addIndex, valueInput;
                printf("Hay nhap vao gia tri can them:");
                scanf("%d", &valueInput);
                printf("Hay nhap vi tri can them:");
                scanf("%d", &addIndex);

                // 100,1,2,3,100,4,5,100
                // xét các tuường hoợp của add index
                if(addIndex < 0){
                    addIndex = 0;
                } else if(addIndex > size){
                    addIndex = size;
                }

                // chèn gia tri vao vi tri index
                // 1 2 3 4 5
                // 1 2 100 3 4 5
                // 2 2 3 4 5
                for(int i = size-1 ; i >= addIndex ; --i){
                    arrayInt[i+1] = arrayInt[i];
                }

                arrayInt[addIndex] = valueInput;
                size++;
                printf("Da them moi thanh cong \n");
                break;
            case 4:
                // sửa
                int editIndex, newValue;
                printf("Hay nhap vi tri can sua:");
                scanf("%d", &editIndex);

                if(editIndex <0 || editIndex > size - 1){
                    printf("vi tri can xoa ko hop le \n");
                } else{
                    // 1,2,3,4,5 : index =2 - value =100
                    printf("Hay nhap vao gia tri moi [gia tri cu = %d]:",arrayInt[editIndex]);
                    scanf("%d", &newValue);
                    arrayInt[editIndex] = newValue;
                    printf("Da cap nhat gia tri \n");
                }

                break;
            case 5:
                // xóa
                // nhap index câ xóa
                int deleteIndex;
                printf("Hay nhap vi tri can xoa:");
                scanf("%d", &deleteIndex);
                if(deleteIndex <0 || deleteIndex > size - 1){
                    printf("vi tri can xoa ko hop le \n");
                } else{
                    // 1,2,3,4,5
                    for (int i = deleteIndex; i < size-1; ++i) {
                        arrayInt[i] = arrayInt[i+1];
                    }
                    size--;// giam kich thuoc mang 1 son vi
                    printf("Da them moi thanh cong \n");
                }
                break;
            case 6:
                break;
            default:
                printf("Lua chon ko hop le : vui lòng nhập từ 1 -6\n");
        }
        if (choice ==6){
            printf("Thoat chuong trinh");
            break;
        }
    }

    return 0;
}
