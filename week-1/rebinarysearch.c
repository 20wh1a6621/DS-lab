    #include<stdio.h>
  2 int rebinarySearch(int,int,int [],int);
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
 15         pos = rebinarySearch(low,high,a,ele);
 16         if (pos == -1 ) {
 17                 printf("Element not found");
 18         }
 19         else{
 20                 printf("Element  found at %d position",pos);
 21         }
 22       return 0;
 23 }
 24 
 25 int rebinarySearch(int low,int high, int a[],int ele){
 26         while(low <= high){
 27                 int mid =(low +high)/2;
 28              if(a[mid] > ele){
 29                    return rebinarySearch(low,mid -1,a,ele);
 30            }
 31            else if(a[mid] < ele){
 32                    return rebinarySearch(mid+1,high,a,ele);
 33            }
 34            else{
 35                    return mid;
 36            }
 37    }
   
   output:
        enter size of list:5
        array element:1
        2
        3
        4
        6
        element to be searched:4
        Element  found at 3 position

        enter size of list:3
        array element:14
        15
        16
        element to be searched:3
        Element not found
