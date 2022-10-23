#include <stdio.h>
#define N 5000
int main() {
	FILE *fp; 
    char text[N];
    int i=0;
    // You can try it with other txt files. 
	if ((fp = fopen ("1.txt", "r")) == NULL){
        printf("File Error!"); 
        return 1; 
    } 
    fgets(text, N-1, fp);
	printf(">>>>>Old Situation Of .txt File:\n\n%s\n\n", text);
	
	if(text[0] >= 'a'){
    		text[0] = text[0] - ('a' - 'A');
		}	
    while(text[i] != '\0'){
    	
    	if(text[i] == '.' && text[i+1] == ' ' && text[i+2] >= 'a'){
    		text[i+2] = text[i+2] - ('a' - 'A');
		}
		if(text[i] == '.' && text[i+1] >= 'a'){
    		text[i+1] = text[i+1] - 32;
		}
		i++;
	}
	printf(">>>>>New Situation Of .txt File:\n\n%s", text);    
	return 0;
}
