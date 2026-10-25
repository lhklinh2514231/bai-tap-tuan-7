#include <stdio.h>
int nhap(int k,int b[], int m){
    int l=k;
    for (int i=k;i<m;i++){
        if(i%2==1 && b[k+1]<b[i] && b[i]<b[i+1]){
            k=i;
            break;
        }
        else if(b[i+1]==0){
            printf ("{%d,%d}",b[k],b[i]);
            k=i;
        }
    }
    if(b[k+1]!=0){
    printf ("{%d,%d} ",b[l],b[k]);
    printf ("\n");
    }
    return k;
}
void khoang (int k,int b[],int m){
    if (k<m-1){
    k=nhap (k,b,m);
    khoang (k+1,b,m);}
}
int main(){
    int n;
    int b[100];
    scanf ("%d",&n);
    int m=2*n;
    for (int i=0;i<n;i++){
        int ai[2];
        for(int j=0;j<2;j++){
            scanf ("%d",&ai[j]);
            b[2*i+j]=ai[j];
        }
    }
    khoang (0,b,m);
    return 0;
}