/*Print the following pattern on the screen.
****
 ** 
  *  
 ** 
****
*/
#include <stdio.h>
#include <math.h>
using namespace std;
int main(void) {
	int i, j, k;
	
	// printing 1st three rows
	for(i=0; i<=2; i++) {
		// printing spaces before first star in each row
		for(k=i+1; k>0; k--) {
			if(i>0) {
				printf(" ");
			}
		}
		// printing stars in each row
		for(j=pow(2, (2-i)); j>0; j--) {
			printf("* ");
		}
		printf("\n"); 
	}
	
	// printing fourth and fifth rows
	for(i=1; i>=0; i--) {
		// printing spaces before first star in each row
		for(k=i+1; k>0; k--) {
			if(i>0) {
				printf(" ");
			}
		}
		// printing stars in each row
		for(j=pow(2, (2-i)); j>0; j--) {
			printf("* ");
		}
		printf("\n"); 
	}
	return 0;
}
