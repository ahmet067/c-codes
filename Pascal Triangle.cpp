#include<stdio.h>
#include<math.h>

int C(int num1,int num2){
	int c;
	int i=0;
	int u=1;
	int j;
	j=num2;
	for(num1;j>0;num1--){
		u=u*num1;
		j--;
	}
	int b=num2;
	int d=1;
	for(num2;b>0;b--){
		d=d*b;		
	}
	c=u/d;
		
	return c;
	
}

int main(){		
	 int l;
	 scanf("%d",&l);
	 int x,y;
	 int a,e,f;
	 for(x=0;x<l;x++){
	 	printf("\n\t\t\t\t\t\t");
	 	for(e=0;e<l-x;e++){
	 		printf("   ");
	}
	 	for(y=0;y<l;y++){
	 		a=C(x,y);
	 		if(a!=0){
	 			printf("%d     ",a);
				 
			 }	
	 		
		 } 	
	 }	
	  		
	return 0;

}


	
	
	
	







