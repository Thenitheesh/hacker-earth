#include <stdio.h>
#include <string.h>

int main(){
	int x=0,y=0,f,t,v;
int h=0,k=0,j;
int a[10],b[10];
char s[1000];
scanf("%d",&t);
while(t--){
scanf("%s",s);
f=strlen(s);
for(int i=0;i<=f;i++){
if (s[i]=='A'){

a[h]=i;
++h;
x=h;
}
if (s[i]=='B'){

b[k]=i;
++k;
y=k;
}
 
}
if(x>0){
x=x-1;

v=a[x];
printf("%d",v+1);}
else {printf("0");}
if(y>0){
	if(j<0){
printf(" 1");	
}
else {j=b[y-1]-b[0];
printf(" %d",j+1);}
}else{printf("0");}
}}
