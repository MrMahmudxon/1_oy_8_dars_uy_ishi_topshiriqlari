

#include <stdio.h>
int main(){
    int a, b;
    printf("birinchi sonni kiriting: ");
    scanf("%d", &a);
    printf("ikkinchi sonni kiriting: ");
    scanf("%d", &b);
    if(a>b){
        printf("Birinchi son katta");
    } else {
        printf("Birinchi son katta emas");
    }
        
    return 0;
}