#include<stdio.h>
#include<math.h>
int main () {
  int n; 
  for( ; ; ) {
  printf("Enter the odd number : ");
  scanf("%d",&n);
  if(n%2==0) {
    printf("Try Again\n");
  }
  if(n%2!=0) {
    break;
  }
  }
printf("You cracked the matrix.\n");
printf("Thank You\n");
return 0;
}