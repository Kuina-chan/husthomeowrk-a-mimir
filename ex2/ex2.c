#include <stdio.h>
int main(){
    double width, length;
    scanf("%lf", &width);
    scanf("%lf", &length);
    if (width == 0 || length == 0){
        printf("Error");
        
    }else {
    	  printf("%lf \n %lf", (width+length)*2, width*length);

 	
	}
	return 0;
}
