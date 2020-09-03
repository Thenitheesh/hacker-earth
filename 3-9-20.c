
#include <stdio.h>

int main(){
    int x,y,z,n;
	int t,h,f;
	float c;
	scanf("%d", &t);
    while(t--){scanf("%d", &h);

	scanf("%f", &c);
 scanf("%d", &f);    	       
	  int  x=0,y=0;z=0 ;
	if(h>50){
     x++;
	}
if(f>5600){
     z=z+3;
	 	}
if(c<0.7){
     y=y+2;
	}
  
  
   n=x+y+z;
if(n==0){
	printf("5");
}
	
switch(n){
	
case 1:
	printf("6");
    break;
	case 2:
	printf("6");
    break;

case 3:
	printf("9");
    break;
case 4:
	printf("7");
    break;
case 5:
	printf("8");
    break;
	
case 6:
	printf("10");
    break;
}

return 0;
	}}
