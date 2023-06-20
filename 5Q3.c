#include<stdio.h>
void main(){
	int i;
	int j;
	int v,r;
	int a[v][r];
printf("enter the size of a ");
scanf("%d",&v);

printf("enter the size of b ");
scanf("%d",&v);


printf("Enter the elements are: \n");
 for(i=0;i<v;i++){
 	for(j=0;j<r;j++){
 		printf("Enter a[%d][%d]: ",i,j);
 		scanf("%d",&a[i][j]);
	 }
}
for(i=0;i<v;i++){
	for(j=0;j<r;j++){
		if(a[i][j]%2==0){
			printf("The even number: %d\n",a[i][j]);
		}else{
			printf("The odd number: %d\n",a[i][j]);
		}
	}
}
}
