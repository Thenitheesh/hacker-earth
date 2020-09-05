
#include <stdio.h>

int main(){
	int a[10];
	int h=0,j=0,f=0;
	int i,n,t ;
	int b[10];
	scanf("%d", &t);
	scanf("%d", &n);
	 while(t--){	for(int k=0;k<n;k++){
			 scanf("%d",&a[k]);
		 }		
	      for(int m=0;m<n;m++){
			  for(int i=m;i<n-1;i++){
				  if(a[i+1]>a[m])
				  j=j+1;
			  }printf("%d ",j);
			  j=0;
		  }
}
}
