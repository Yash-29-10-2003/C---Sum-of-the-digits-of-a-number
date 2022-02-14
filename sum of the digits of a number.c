#include<stdio.h> 
 int sum(int,int); 
 
 int main() 
 { 
   int a,n=0; 
   printf("\n enter the number "); 
   scanf("%d",&a);   
   printf("\n sum of digits = %d",sum(a,n)); 
   return 0; 
 } 

int sum(int a,int n) 
 { 
   int i,b;
   b = a%10;
   i = a/10;
   n = n+b; 
   if(i!=0)
   sum(i,n); 
   else  
   return n; 
 } 