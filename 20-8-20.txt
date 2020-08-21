#include <stdio.h>



int main(){
	int p,k,t,n,j;
	char str[100];
	p=0;
	k=0;
	scanf("%d", &t);
		scanf("%d", &n);
	while(t--){	
		while(n!=0){
		int	r=n%10;
		if(r==1){
			p++;
		}if(r==0){
			k++;
		}n=n/10;
		}
		if(p==1){
			printf("Yes");
		}
		else if(k==1){
			printf("Yes");
		}else{
			
				printf("No");
			}
		}
		
		
		
		 }        			
	      


