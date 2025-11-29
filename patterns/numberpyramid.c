#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
       int m;
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=m;k++){
            printf("%d",k);
        }
        m=m+2;
        printf("\n");
    }
    return 0;
}