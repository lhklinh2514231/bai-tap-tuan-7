#include <stdio.h>
int đếm (int k,int a[],int n){
    int c=1;
    int x=k;
    for (int i=k;i<n;i++){
        if (a[i]==a[i+1]){
            c++;
            x=i+1;
        }
        else {break;}
    }
    if (c%2==1){
        printf ("%d lap lai %d lan",a[k],c);
        printf ("\n");
    }
    return x;
}
void sole (int k,int a[],int n){
    if (k<n){
        int y=đếm (k,a,n);
        sole (y+1,a,n);
    }
}
int main(){
    int a[100];
    int n;
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
    sole (0,a,n);
    return 0;
}