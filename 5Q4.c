#include<stdio.h>
void main(){
	int i;
	int j;
	int v;
	int r;
	int sum=0;
	int add=0;
	int a[3][3];
printf("Enter the elements: \n");
 for(i=0;i<=2;i++){
 	for(j=0;j<=2;j++){
 		printf("Enter a[%d][%d]: ",i,j);
 		scanf("%d",&a[i][j]);
	 }
 }
printf("Enter row number: ");
scanf("%d",&n);
printf("Elements of row n: ");
  for(j=0;j<=2;j++){
  	printf("%d , ",a[v][j]);
  	sum+=a[v][j];
  }
  printf("\nThe sum is: %d",sum);
  
printf("\nEnter column number: ");
scanf("%d",&m);
printf("\nElements of column n: ");
  for(i=0;i<=2;i++){
  	printf("%d , ",a[i][r]);
  	add+=a[i][r];
  }
  printf("\nThe sum is: %d",add);
}
