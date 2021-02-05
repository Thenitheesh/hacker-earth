
#include <stdio.h>

int main(){
    int q;
    scanf("%d",&q);
	while(q--){
	    int a,b,q;
	int x[50];
	int m=0;
	
	
scanf("%d",&a);
scanf("%d",&b);
if(b>a){
    for(int i=a;i<=b;i++){
 int	count=0;
 
for(int j=1;j<=i;j++){
   
	if(i%j==0){
		count++;
	
	}
}x[m]=count;
m=m+1;
}
int  temp=0;
 
 for(int f=0;f<b;f++){
     if(x[f]==2){
         temp=temp+1;
     }
 }printf("%d\n",temp);
}

else{ for(int i=b;i<=a;i++){
 int	count=0;
 
for(int j=1;j<=a;j++){
   
	if(i%j==0){
		count++;
	
	}
}x[m]=count;
m=m+1;
}
int  temp=0;
 
 for(int f=0;f<a;f++){
     if(x[f]==2){
         temp=temp+1;
     }
 }printf("%d\n",temp);
}
    
}
}
