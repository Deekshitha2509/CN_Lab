
#include <string.h>
int main(){
	char s[30],str,en;
	
	printf("Enter the Starting and Ending delimiters: \n");
	scanf("%c",&str);
	scanf(" %c",&en);
	
	printf("enter the message: \n");
	scanf("%s",s);
	
	int l = strlen(s);
	printf("%c ",str);
	
	for(int i=0;i<l;i++){
		if(s[i]==str){
			printf(" esc ");
		}
		else if(s[i]==en){
			printf(" esc ");
		}
		
		printf(" %c ",s[i]);
		
	}
	printf(" %c \n",en);
	return 0;
}