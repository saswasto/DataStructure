#include<stdio.h>
int main(){
int a[] = {-3, 4, 1, 88, 5, 7};
int searchItem;
int i;
printf("Enter the search item: ");
scanf("%d",&searchItem);
for(i= 0; i< 6; i++){
if(a[i] == searchItem){
printf("Item found at index: %d\n",i);
return 0;
}
}
printf("Item not found.\n");
return 0;
}
//Runtime complexity: O(N)
//Space Complexity  : O(1)
