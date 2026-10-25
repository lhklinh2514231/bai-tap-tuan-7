#include <stdio.h>
int main (){
    int a[100];
    int b[100];
    int n;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    int k=0;
    for (int i=0;i<n;i++){
        if (a[i]<0){
            b[k]=a[i];
            k++;
        }
    }
    for (int i=0;i<n;i++){
        if (a[i]>0){
            b[k]=a[i];
            k++;
        }
    }
    for (int i=0;i<n;i++){
        printf ("%d ",b[i]);
    }
    return 0;
}