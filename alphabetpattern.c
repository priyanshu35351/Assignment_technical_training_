//Alphabet pattern

#include<stdio.h>

int main () {
int  i,j,l,m;
int row;
int k;
printf("enter no of rows:\n");
scanf("%d",&row);
    
    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
            printf("%c",'A'+j);// 'A' +j prints from alphabet A to int value of j i.e(if j=4,then ABCD will be printed)
        }
        for(k=0;k<2*(row-i-1);k++) {
            printf(" ");
        }
        
        for(l=i;l>=0;l--) {
            printf("%c",'A'+l);
        }
        printf("\n");
    }
    return 0;
}



