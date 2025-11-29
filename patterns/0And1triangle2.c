#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){

        for(int j=1;j<=i;j++)
        { int a;
     if((i+j)%2==0){
      a=1;
     printf("%d",a);}
     else{
     a=0;
     printf("%d",a);
    }
   
    }
     printf("\n");
}
return 0;
}