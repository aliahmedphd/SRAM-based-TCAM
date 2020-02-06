# include <stdio.h>
#include <time.h>
#include <stdlib.h>

# define ROW 10
# define COL 8

int main (void){
int j,k,n,w,m,b=0;
int Conv_TCAM_Table[ROW][COL] = { };



printf ("\n This is the Random Convention TCAM Table \n");
	for (j=0;j<COL;j++){
		printf("\tCol %d:",j);
	}
	printf("\n");
	for ( j=0;j<ROW;j++){
	printf("Row %d: \t",j);		
		for(k=0;k<COL;k++){
		Conv_TCAM_Table[ROW][COL] =  rand() % 3;
		if (Conv_TCAM_Table[ROW][COL] == 2)
			printf("x \t");
		else		
			printf ("%d \t",Conv_TCAM_Table[ROW][COL]);		
		}
	printf("\n");	
	}
printf ("\n Enter the value of n:\t");
scanf	("%d",&n);

printf ("\n Enter the value of w:\t");
scanf	("%d",&w);

printf ("\n Enter the value of b:\t");
scanf	("%d",&b);

printf ("\n Enter the value of m:\t");
scanf	("%d",&m);

printf("\n n=%d \t w=%d \t b=%d \t m=%d \n",n,w,b,m);

	return 0;
}
