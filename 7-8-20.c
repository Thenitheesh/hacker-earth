 #include <stdio.h>
#include<string.h>
int main(){
	int n=0,t,m,g,h=0,u,T;
	char w[50];
	char i[50];
	int a1[50],a2[50];
	scanf("%d",&t);
	scanf("%s\n",&w);
	scanf("%s", &i);
while(t--){
	for(n=0,m;w[n]!=0;++n){
		while(!(w[n]>='1' && w[n]<='9') && !(w[n]=='\0'))
		{for(m=n;w[m]!='\0';++m){
		w[m]=w[m+1];}
		w[m]='\0';
	}}
	for(h=0,u;i[h]!=0;++h){
		while(!(i[h]>='1' && i[h]<='9') && !(i[h]=='\0'))
		{for(u=h;i[u]!=0;++u){
		i[u]=i[u+1];}
		i[u]='\0';
	}	}}
int q=strcmp(w,i);
if(q==0){
	printf("equal");
}else{
	printf("different");
}
	}
		      



