#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

int main(){
int i,a,b=16,s=1;

char letter[]={'#','$','&','/','?','é','|','=','#','$','&','/','?','é','|','='};
char record[8];	
char card[4][4];

printf("Welcome to The Memory Puzzle Game.The main goal is to find dual of each symbol in fewest moves.Please enter twonumber between 1-16 by leaving a space between them like:\n1 16\n5 2\n13 9\n7 11\n\n");

srand(time(NULL));
 
for(int x=0;x<4;x++){
	printf("                                        ");
	for(int y=0;y<4;y++){	 	
		
		a=rand()%b;
		
		card[x][y]=letter[a];
		
		i=a;
		while(i<b-1){
						
			letter[i]=letter[i+1];
			i++;						
		}
		if(s>9)													
			printf("    %d",s);
		else	
			printf("     %d",s);
		b--;	
		s++;	
	}
	
	printf("\n\n\n");	
}
// 1-2-3....14-15-16 is printed. 

int m,n,k=0,c=0;

//While loop and game started.
while(true){
	
	scanf("%d %d",&m,&n);
	
	if(m>=1 && m<=16 && n>=1 && n<=16){
	
	system("CLS");

	if(card[(m-1)/4][(m-1)%4]==card[(n-1)/4][(n-1)%4]){
	
	record[k]=card[(m-1)/4][(m-1)%4];
	
	k++;	
	}

printf("\n\n\n\n\n\n\n");

s=1;	

for(int x=0;x<4;x++){
	
	printf("                                        ");	
	for(int y=0;y<4;y++){			
		
		if(x==(m-1)/4 && y==(m-1)%4){
			
			printf("   %3c",card[x][y]);
		}
		
		else if(x==(n-1)/4 && y==(n-1)%4){
			
			printf("   %3c",card[x][y]);
		}			
		
		else{
			
			for(int i=0;i<=k;i++){
				
				if(record[i]==card[x][y]){
					
					printf("   %3c",card[x][y]);
					break;
					
					
					
				}
				
				if(i==k){
				
					if(s>9)													
						printf("    %d",s);
					else	
						printf("     %d",s);
					
				}
			}
			
				
			
			
												
		}
		
s++;		
}
printf("\n\n\n");
	
	}
	
		
	
			

		
c++;

if(k==8){
	break;
}
}
else{
	printf("YOU ENTERED IS INVALID.\n");
}
}
printf("                                          YOU FINISH IT IN %d STEP\n\n",c);

//file-read-write coding begins. 	
	int puan[11],temp1;
	
	char nn[11][20],temp[1][20];
	
	printf("IT MUST HAVE MAX 20 LETTER AND DON'T USE ANY TURKISH CHARACTER\nTYPE YOUR NICKNAME:");
	scanf("%s",&nn[10]);
	
	puan[10]=c;	
		
	FILE* score;
	
	score=fopen("score.txt","r");
	
     i=0;
	
	while(!feof(score)){
	
	fscanf(score,"%d %s",&puan[i],&nn[i]);
		 	 
	 i++;
	}
	
	fclose(score);
			
	for(int x=0;x<10;x++){
		
		for(i=0;i<10;i++){
			
			if(puan[i]>puan[i+1]){
				
				temp1=puan[i+1];				
				strcpy(temp[0],nn[i+1]);
				
				puan[i+1]=puan[i];
				strcpy(nn[i+1],nn[i]);
				
				puan[i]=temp1;
				strcpy(nn[i],temp[0]);
				
			}
			
			
		}
		
			
	}
	
	score=fopen("score.txt","w");
	
	i=0;
	
	while(i<10){

	
	fprintf(score,"%d %s\n",puan[i],nn[i]);
	 
	 
	 i++;
	}
	
	
	fclose(score);
	

	
	


	
	
	return 0;
}


	




	
	



	


	

