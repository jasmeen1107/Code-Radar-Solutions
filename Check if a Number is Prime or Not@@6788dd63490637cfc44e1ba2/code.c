#include<stdio.h>
int main(){
    int a, count=0, i=1;
    scanf("%d",&a);
    while(i<=a){
          if (num%i==0){
            count++;
          }
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}