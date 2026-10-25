#include <stdio.h>
int main (){
    int arr[100];
    int n;
    int c=0;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        int b=0;
        for (int j=i;j<n;j++){
            b=b+arr[j];
        if (b==0){
            printf ("(");for (int k=i;k<=j;k++){
            printf ("%d ",arr[k]);}
            printf (")\n");
            c=c+1;
        }
        
    }
    if (c==0){
        printf ("Khong co day con nao tong bang 0");
    }
}
return 0;

}