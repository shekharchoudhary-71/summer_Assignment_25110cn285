#include<stdio.h>
int main(){
    int digit,reverse=0,n,original;
    printf("Enter a number=");
       scanf("%d",&n);
       original=n;
      while(n!=0){
        digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
      }
      if(original==reverse){
      printf("Number is palindrome.");
      }
      else
      printf("Number is not palindrome.");
        return 0;
}
