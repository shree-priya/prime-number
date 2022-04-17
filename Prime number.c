#include <stdio.h>
int prime(int n);
int main() {
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    prime(n);
    return 0;
}
int prime(int n){
    int k=1,o=0;
    for(0;k<=n;k++){
        if(n%k==0){
          o++;
        }
        }
    if(o==2){
       printf("it is  prime number");
        }
    else{
       printf("it is not prime number");
    }
}
