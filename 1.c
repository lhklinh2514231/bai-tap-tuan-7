#include <stdio.h>
int main (){
    int n,a;
    scanf ("%d",&n);
    scanf ("%d",&a);
    int arr[100];
    for (int i=0;i<n;i++){
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]+arr[j]==a ){
                printf ("(%d;%d)\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}
