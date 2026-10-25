#include <stdio.h>
int main(){
    int a[100];
    int n;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    for (int i=0; i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]>a[j]){
                int b=a[j];
                a[j]=a[i];
                a[i]=b;
            }
        }
    }
    int x=1;
    for (int i=0;i<n-1;i++){
        if (a[i]==a[i+1]){
            printf ("Thua so %d ",a[i]);
            printf("\n");
            x=0;
        }
        else if (a[i]+1<a[i+1]){
            x=0;
            for (int c=a[i]+1;c<a[i+1];c++){
                printf ("thieu so %d",c);
                printf ("\n");
            }
        }
    }
    if (x==1){
        printf ("day lien tuc");
    }
    return 0;
}