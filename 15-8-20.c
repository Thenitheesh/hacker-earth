#include <stdio.h>

int main(){
	int h,n,i,l=0;
	scanf("%d", &n);
	while(n>0){
		h=n/10;
		l=l+1;
		n=n/10;
		if(h==0){		
if(l<=3){
	printf("%d\n",l);	
	}  else     {			
	printf("More than 3 digits");} }
			
	         
}}
