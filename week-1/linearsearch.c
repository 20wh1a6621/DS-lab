1 #include<stdio.h>
  2 int linearSearch(int , int *,int);
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
 15         pos = linearSearch(n,a,ele);
 16         if (pos == -1 ) {
 17                 printf("Element not found");
 18         }
 19         else{
 20                 printf("Element  found at %d position",pos);
 21         }
 22 
 23 }
 24 
 25 int linearSearch(int n, int a[n],int ele){
 26    int i,pos = -1;
 27    for(i=0;i<n;i++){
 28            if (a[i] == ele){
 29                    pos = i;
 30                    break;
 31             }
 32    }
 33    if(pos == -1){
 34            return -1;
 35    }
 36    else{
 37            return pos;
 38    }
 39    }
                                                                                                                            5,1           Top

