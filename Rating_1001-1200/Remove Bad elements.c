#include <stdio.h>

int main(void) {
	// your code goes here
	int t; scanf("%d", &t);
	
	while(t--) {
	    
	    int n;
	    scanf("%d", &n);
	    
	    int Array[n];
	    int check[n + 1];
	    
	    for(int i = 0; i <= n; i++) {
	        check[i] = 0; 
	    }
	    
	    for(int i = 0 ; i < n; i++) {
	        
	        scanf("%d", &Array[i]);
	        check[Array[i]]++;
	        
	    }
	    
	    int maximum = -1;
	    
	    //traversing 
	    for(int i = 1 ; i <= n; i++) {
	        if(maximum < check[i]) {
	            maximum = check[i];
	        }
	    }
	    
	    printf("%d\n", n - maximum);
	}
	return 0;
}
