#include <stdio.h>
int main()
{
 int y = 675648594;
 int arr[20] = {0};
 int i =0,c=0;
 
 while (y>0){
 arr[i++] = y%10;
 y = y/10;
 c++;
 }
 for(int j=0;j<c;j++){
 printf("%d",arr[j]);
 }
 return 0;
}
