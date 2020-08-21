#include <stdio.h>

int main(){
	int i,t,n,loc=0;
	scanf("%d", &t);
	scanf("%d", &n);
	if(t<1000){for(i=1;i<=n;++i){
		if(n%i==0){
			loc=loc+1;
		}
	}     if(loc==2){         			
		printf("yes");}
		else{
			printf("no");
		}    
	}}
