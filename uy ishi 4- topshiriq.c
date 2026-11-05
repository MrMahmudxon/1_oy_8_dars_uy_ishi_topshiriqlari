
#include <stdio.h>
int main(){
    int a;
    printf("Haroratni kiriting: ");
    scanf("%d", &a);
    
    if(a>20 && a<35){
        printf("Havo iliq");
    } else {
        printf("Havo saliqin yoki issiq");
    }
       
        
    return 0;
}