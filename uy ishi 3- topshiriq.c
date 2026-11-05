
#include <stdio.h>
int main(){
    int a, b;
    printf("birinchi sonni kiriting: ");
    scanf("%d", &a);
    printf("Ikkinchi  sonni kiriting: ");
    scanf("%d", &b);
   
    if(a!=b){
        printf("Sonlar xar xil");
    } else {
        printf("Sonlar teng");
    }
        
    return 0;
}