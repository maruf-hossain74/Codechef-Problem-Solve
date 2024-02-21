#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t != 0) {
	    int n;
	    scanf("%d", &n);
	    if(n == 2) {
	        printf("%d %d\n%d %d\n",-1,-1,-1,-1);
	    }
	    else {
	       
    	    for(int i = 0 ; i < n ; i++) {
    	        for(int j = 0 ; j < n; j++) {
    	            if(i == j)
    	                printf("%d ", -1);
    	            else 
    	                printf("%d ", 1);
    	        }
    	        printf("\n");
    	    }
    	    
	    }
	    t--;
	}
    return 0;
}
