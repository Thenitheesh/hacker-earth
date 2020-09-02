
#include <stdio.h>

int main(){
	int t,j,l,x,h;
	scanf("%d", &t);
	scanf("%d", &l);              			
		while(t--){
         if(l==1 || l==2 ){
			x=l*l*l;
            printf("%d",x);
		 }
		 if(l>2) {
			 x=(l*l*l);
            j=l-2;
           h=x-(j*j*j);
		 printf("%d",h); 
		}
}
}
