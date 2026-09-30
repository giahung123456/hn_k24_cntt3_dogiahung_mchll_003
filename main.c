#include <stdio.h>
#define MAX_SIZE 50
int passengers[MAX_SIZE]={32,18,45,27,50,45};
int n=6;
int main(void) {
//    for(int i=0;i<n;i++){
//        printf("Passenger %d: %d\n",i+1,passengers[i]);
//    }
//    printf("Hello, World!\n");
int choice=0;
do{
    printf("1. them so hanh khach\n");
    printf("2. sua thong tin hanh khach\n");
    printf("3. xoa hanh khach\n");
    printf("4. tim kiem hanh khach\n");
    printf("5. hien thi danh sach hanh khach\n");
    printf("0. thoat\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
        int new_passenger;
        int position;
        if(MAX_SIZE==n){
            printf("mang da day không thể thêm");
        }
        printf("Enter the number of passengers to add: ");
        scanf("%d", &new_passenger);

        printf("Enter the position to add the passenger: ");
        scanf("%d", &position);
        if(position >0 && position < n+1){
            for(int i =n-1;i>=position-1;i--){
                passengers[i+1]=passengers[i];
            }
            passengers[position-1]=new_passenger;
            n++;

        } else{
            printf("vị trí không hơp lệ;không thể thêm");
        }
            for (int i = 0; i < n; i++) {
                printf("%d\n",passengers[i]);
            }
        break;
        case 2:
            int pos_fix;
            int num_fix;
            printf("nhập vi trí cần sửa");
            scanf("%d",&pos_fix);
            printf("nhập số cần sửa");
            scanf("%d",&num_fix);
            for (int i = 0; i < n; i++) {
                if(i==pos_fix-1){
                    passengers[pos_fix-1]=num_fix;
                }

            }
            for (int i = 0; i < n; i++) {
                printf("%d\n",passengers[i]);
            }

            break;
        case 3:
            if(n==0){
                printf("mảng rỗng không thể xoá");
                break;
            }
            int pos_xoa;
            printf("nhập vị trí cần xoá");
            scanf("%d",&pos_xoa);
            if(position >0 && position < n+1){
                for (int i = pos_xoa; i < n; i++) {
                    passengers[i-1]=passengers[i];
                }
                n--;
            } else{
                printf("vị trí không hơp lệ;không thể thêm");
            }

            for (int i = 0; i < n; i++) {
                printf("%d\n",passengers[i]);
            }
            break;
        case 4:
            int arr[100];
            int mm=0;
            int num_search;
            printf("nhập số cần tìm");
            scanf("%d",&num_search);
            int pos_search;
            int count=0;
            for (int i = 0; i < n; i++) {
                if(num_search==passengers[i]){
                    count++;
                    arr[mm]=i+1;
                    mm++;
                }
            }
            printf("tìm thấy tại vị trí:");
            for (int i = 0; i < mm; i++) {
                printf("%d ",arr[i]);
            }
            printf("\n");
            printf("số lượng: %d \n",count);
            break;
        case 5:

            for (int i = 0; i < n; i++) {
                printf("%d\n",passengers[i]);
            }
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }

} while (choice!=0);
    return 0;
}
