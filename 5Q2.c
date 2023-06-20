#include<stdio.h>
void main(){
	int i;
	int j;
	int a[3][3];
	int l;
printf("Enter the elements : \n");
 for(i=0;i<=2;i++){
 	for(j=0;j<=2;j++){
 		printf("a[%d][%d]: ",i,j);
 		scanf("%d",&a[i][j]);
 		l=a[i][j];
	 }
 }
 printf("The largest elements of Array: \n");
  for(i=0;i<=5;i++){
    for(j=0;j<=5;j++){
  		if(l>a[i][j]){
  			
		}
    }
  }
  printf("%d ",l);
}
	  

