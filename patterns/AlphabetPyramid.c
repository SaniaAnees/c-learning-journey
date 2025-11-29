#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++){
printf(" ");
        }
          int a=1;
        for(int k=1;k<=m;k++){
      int d= a+64;
        char ch=(char)d;
    printf("%c",ch);
a++;}
    
    m=m+2;
    printf("\n");}
    return 0;
}