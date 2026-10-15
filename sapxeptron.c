#include <stdio.h>
void trộn (int a[],int đầu,int giữa, int cuối) {
    int n1 = giữa-đầu +1;
    int n2 = cuối- giữa;
    int L[n1],R[n2];
    for (int i=0;i<n1;i++){
        L[i]=a[đầu+i];
    }
    for (int i=0;i<n2;i++){
        R[i]=a[giữa +1 +i];
    }
    int i=0;
    int j=0;
    int k= đầu;
    while (i<n1 && j<n2){
        if ( L[i]<R[j]){
            a[k]=L[i];
            i++;
        }
        else { 
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while (i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while (j<n2){
        a[k]=R[j];
        j++;
        k++;
    }
    for (int b=0;b<=cuối;b++){
        printf ("%d ",a[b]);
    }
    printf ("\n");
}
void xếp(int a[],int đầu,int cuối){
    if (đầu<cuối){
        int giữa = đầu +(cuối-đầu)/2;
        xếp (a,đầu,giữa);
        xếp (a, giữa+1,cuối);
        trộn (a, đầu,giữa, cuối);
    }
}
int main (){
    int a[100];
    int n;
    scanf ("%d",&n);
    for (int i=0; i<n;i++){
        scanf ("%d",&a[i]);
    }
    xếp (a,0,n-1);
    return 0;
}