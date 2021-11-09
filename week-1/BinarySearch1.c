#include<stdio.h>
  2 int binarySearch(int,int,int [],int);
  3 int main(){
  4 int n,ele;
  5 printf("enter size of list:");
  6 scanf("%d", &n);
  7 int a[10];
  8 printf("\n array element:");
  9 for (int i =0; i<n; i++){
 10         scanf("%d",&a[i]);
 11 }
 12         printf(" element to be searched:");
 13         scanf("%d",&ele);
 14         int pos,low =0,high = n-1;
 15         pos = binarySearch(low,high,a,ele);
 16         if (pos == -1 ) {
 17                 printf("Element not found");
 18         }
 19         else{
 20                 printf("Element  found at %d position",pos);
 21         }
 22       return 0;
 23 }
 24 
 25 int binarySearch(int low,int high, int a[],int ele){
 26         while(low <= high){
 27                 int mid =(low +high)/2;
 28              if(a[mid] > ele){
 29                    high = mid-1;
 30            }
 31            else if(a[mid] < ele){
 32                    low = mid +1;
 33            }
 34            else{
 35                    return mid;
 36            }
 37    }
       
   
     output:
         enter size of list:5
         array element:12
         13
         14
         15
         16
         element to be searched:2
         Element not found
         
         enter size of list:3
         array element:1
         2
         3
         element to be searched:2
         Element  found at 1 position
