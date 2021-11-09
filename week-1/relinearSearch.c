include<stdio.h>
  2 int relinearSearch(int , int *,int);
  3 int main(){
  4 int n,ele;
  5 printf("no. of  elements:");
  6 scanf("%d", &n);
  7 int a[10];
  8 printf("\n array element:");
  9 for (int i =0; i<n; i++){
 10         scanf("%d",&a[i]);
 11 }
 12         printf(" element to be searched:");
 13         scanf("%d" , &ele);
 14         int pos;
 15         pos = relinearSearch(n,a,ele);
 16         if (pos == -1 ) {
 17                 printf("Element not found");
 18         }
 19         else{
 20                 printf("Element  found at %d position",pos);
 21         }
 22 
 23 }
 24 int i =0;
 25 int relinearSearch(int n, int a[n],int ele){
 26            if (a[i] == ele){
 27                    return i;
 28             }
 29 
 30            else if(i < n){
 31                  i++;
 32                  relinearSearch(n,a,ele);
 33    }
 34    else{
 35            return -1;
 36    }
 37 }
     
    output:
       no. of  elements:3
       array element:1
       2
       3
       element to be searched:6
       Element not found
       
      no. of  elements:5
      array element:1
      2
      3
      4
      5
      element to be searched:2
      Element  found at 1 position
