//butterfly pattern 

#include<stdio.h>
int main (){
    int i,j,k,l,m,n=4,p,q,r,s,t,u;
    for(i=0;i<n;i++) {
        for(j=0;j<=i;j++){
            printf("*");
        }
        for(k=0;k<n-i-1;k++) {
            printf(" ");
        }

        for(l=0;l<=n-i-1;l++){
            printf(" ");
        }
        for(m=0;m<=i;m++){
            printf("*");
        }
        printf("\n");

    }
    for(p=0;p<9;p++) {
        printf("*");
    }
    printf("\n");
    for(i=n;i>0;i--) {
        for(j=i;j>0;j--) {
            printf("*");
        }
        for(k=n-i;k>0;k--){
            printf(" ");
        }
        for(l=n-i;l>=0;l--){
            printf(" ");
        }
        for(m=i;m>0;m--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}