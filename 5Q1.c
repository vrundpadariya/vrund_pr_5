#include<stdio.h>

void main(){
int v;	
int a[v];
int i,j;

printf("Enter the size of arry :");
scanf("%d",&v);

printf("Enter the elements of arry \n");

for(i=0;i<v;i++){
printf("ENTER A[%d]",i);
scanf("%d",&a[i]);	
}	

printf("negative elements from arry is \n");
for(i=0;i<v;i++){
if(a[i] < 0){
	printf("%d ",a[i]);
}

}	
		
}
