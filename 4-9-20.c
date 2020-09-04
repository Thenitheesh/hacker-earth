
#include <stdio.h>

int main(){
	int t,n;
	char s[10];
	int c=0,o=0,d=0,e=0,h=0,f=0;
	int q=0;
	  scanf("%d",&t);
	    scanf("%d",&n);
         while(t--) {	for(int i=0;i<n;i++){
				  scanf("%s",s);
				  for(int j=0;j<sizeof(s);j++){
					  if( s[j]=='c')
					  c=c+1;
                     if (s[j]=='o')
					 o=o+1;
					 if (s[j]=='d')
					 d=d+1;
					 if (s[j]=='e')
					 e=e+1;
					 if (s[j]=='h')
					 h=h+1;
					 if (s[j]=='f')
					 f=f+1;
				  }
			  }	
while(c !=0 && o!=0 && d!=0 && e!=0 && h!=0 && f!=0){
c=c-2;
o=o-1;
d=d-1;
e=e-2;
h=h-1;
f=f-1;
q=q+1;
}
printf("%d",q);
} }
