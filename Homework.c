#include<stdio.h>
#include<math.h>
int main () {
    int num,O,T,H;
    printf("Enter a 3 digit number : ");
    scanf("%d",&num);

    O = (num % 10);
    printf("%d at your ones place\n",O);
    
    T = (num / 10)%10;
    printf("%d is your tens place\n",T);

    H = (num / 100);
    printf("%d is your hundreds place\n",H);

    if(num == O*O*O + T*T*T + H*H*H ) { 
        printf("Number is armstrong\n");
    }
    else {
        printf("Number is not armstrong\n");
    }
    
return 0;
}