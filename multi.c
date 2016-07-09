#include<stdio.h>
void main(){
  int n,a,i;
  printf("Enter the number and mutiplicant:");
  scanf("%d%d",&n,&a);
  for(i=1;i<=n;i++){
    printf("%d*%d=%d",i,a,i*a);
  }
}
