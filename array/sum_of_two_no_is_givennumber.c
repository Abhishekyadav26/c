#include <stdio.h>
int main(){
    int count=0,n;
    printf("enter the no of element in array:");
    scanf("%d",&n);
    int arr[n];
    for(int k=0;k<=n-1;k++){
        printf("enter the %d element:",k+1);
        scanf("%d",&arr[k]);
    }
    int inputnumber;
    printf("enter the sum,you want to compare");
    scanf("%d",&inputnumber);
    for(int i=0;i<=n-1;i++){
        for (int j=i+1;j<=n-1;j++){
            if(arr[i]+arr[j]==inputnumber ){
                count++;
            }
        }
    }
    printf("the no of pairs is %d ",count);
    return 0;
}