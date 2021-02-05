
#include <stdio.h>

#include <math.h>

int main(){
	int t;
	scanf("%d", &t);              			
	while(t--){
		int u,x,m,N,count=0;
		int g,i;
		
		int k=0;
		scanf("%d", &u); 
		scanf("%d", &x);              	
		scanf("%d", &m);              	
		scanf("%d", &N);              	
		     for(int a=0;a<=u;a++){
				  for(int b=0;b<=u;b++){
					 for(int c=0;c<=u;c++){
						g=(pow(a,x)+pow(b,x)+pow(c,x));
                      i=(g-m)%N;
					  if(i==0){
						  count=count+1;
					  }
					   }
					 
				 }
			 }        	
printf("%d\n",count);

	}
}



