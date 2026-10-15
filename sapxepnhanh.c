#include <stdio.h>
int phandoan (int a[], int đầu, int cuối){
    int chốt = đầu;
    int i= đầu +1;
    int j=cuối;
    while (i<=j){
        while (i<= cuối && a[i]< a[chốt]){
            i++;
        }
        while (đầu < j && a[j]> a[chốt]){
            j--;
        }
        if (i<j){
        int temp =a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
        for (int i=0;i<=cuối;i++){
        printf ("%d ",a[i]);
        }
        printf ("\n");
        }
    }
    int temp = a[j];
    a[j]= a[đầu];
    a[đầu] = temp;
    for (int i=0;i<=cuối;i++){
    printf ("%d ",a[i]);
    }
    printf ("\n");
    return j;
}
void xepnhanh (int a[], int đầu, int cuối){
    if (đầu <cuối){
        // linh là cái điểm cắt (không biết miêu tả sao nên em lấy tên em;-;)
        int linh=phandoan (a, đầu,cuối);
        xepnhanh (a,đầu,linh-1);
        xepnhanh (a,linh+1,cuối);
    }
}
int main(){
    int a[100];
    int n;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    xepnhanh (a,0,n-1);
    return 0;
}