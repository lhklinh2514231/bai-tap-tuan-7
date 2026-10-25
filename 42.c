#include <stdio.h>
int main(){
    int a[100];
    int n,x,y;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        if (a[i]>a[i+1]){
            x=i;
            break;
        }
    }
    for (int j=n-1;0<=j;j--){
        if (a[j]<a[j-1]){
            y=j;
            break;
        }
    }
    int temp = a[x];
    a[x]=a[y];
    a[y]=temp;
    for (int i=0;i<n;i++){
        printf ("%d ",a[i]);
    }
    return 0;
}