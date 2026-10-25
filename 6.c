#include <stdio.h>
int main(){
    int a[100];
    int n;
    int b[10000]={0};
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    for (int i=0;i<n-1;i++){
        b[a[i]]=1;
    }
    printf ("{ ");
    for (int i=0;i<n;i++){
        if (b[a[i]]==1){
            printf ("%d ",a[i]);
            b[a[i]]=0;
        }
    }
    printf ("}");
    
    return 0;
}