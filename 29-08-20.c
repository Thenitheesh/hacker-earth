#include <stdio.h>

int main(){
	int t,n;
	int f=0;
	int N[5]={2010,2015,2016,2017,2019};
	scanf("%d", &t);
	scanf("%d", &n); 
	while(t--){
		for(int i=0;i<5;i++){
			 if(N[i]==n){
				 printf("HOSTED");
			 }
			 
		 } 
		for(int i=0;i<5;i++){
			 if(N[i]!=n){
			f=f+1;	
			 }
		 } 
		 if(f==5){
			  printf("NOT HOSTED");
		 }
		
	}    
}

