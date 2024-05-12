#include <stdio.h> 
void main() {
    int ki,gu,kik,guk,x;
    printf("sum of odd and sum of even numbers ending with sum of odd andeven numbers <50\n");
    printf(" input x ");
    scanf("%d",&x);
    ki=0; gu=0; kik=0; guk=0;
    if ( x % 2) {
        gu +=x;
        
		guk++;
    } else {
        ki +=x;
        
		kik++;
    };
    while( ki < 50) {
        printf(" input x ");
        scanf("%d",&x);
        if (x % 2 ) {
            ki +=x; kik++;}
        else {
            gu +=x; guk++;
        };
    };
    printf("kik＝ %d, ki ＝ %d \n", kik,ki);
    printf("gu＝%d,gu＝ %d \n",guk,gu);
}
