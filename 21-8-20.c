#include <stdio.h>
int main(){
	int s,a,b,t;
	scanf("%d", &t);
	scanf("%d", &a);
	scanf("%d", &b);              			
	if(t>0){ while(a--){
    s=b*(b+1)/2;
	b=s;
	}
	printf("%d",s);
}}

