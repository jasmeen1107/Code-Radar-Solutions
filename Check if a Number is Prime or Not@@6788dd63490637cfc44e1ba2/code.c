// #include<stdio.h>
// int main(){
//     int a, count=0, i=1;
//     scanf("%d",&a);
//     while(a>=i){
//           if (a%i==0){
//             count++;
//           }
//           i++;
//     }
//     if(count==2){
//         printf("Prime");
//     }
//     else{
//         printf("Not Prime");
//     }
//     return 0;
// }/



#include<stdio.h>
int main(){
   int a,count=0,i=1;
   scanf("%d",&a);
   while(a>=i){
    if(a%i==0){
        count++;
    }
    i++;}
if(count==2){
    printf("Prime");
}
else{
    printf("Not Prime");
}
    return 0;
}