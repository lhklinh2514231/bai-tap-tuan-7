#include <stdio.h>
int main(){
    int a[100];
    int n,x;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[j]<a[i]){
                int temp =a[i];
                a[i]=a[j];
                a[j]=temp;         
            }
        }
    }
    printf("Nhap so can tim: ");
    scanf ("%d",&x);
    int l=1;
    int d= (int)(((x-a[0])/(double)(a[n-1]-a[0]))*(n-1));
    if (d<=n-1-d){
        for (int i=0;i<=d;i++){
            if (a[i]==x){
                l=0;
                printf ("Da tim thay so %d",a[i]);
            }
        }
    }
    if (d>=n-1-d){
        for (int i=d+1;i<n;i++){
            if (a[i]==x){
                l=0;
                printf ("Da tim thay so %d",a[i]);
            }
        }
    }
    if (l==1){
        printf ("Khong tim thay %d",x);
    }
    return 0;
}