
#include <stdio.h>
int main(){
    int a, b;
    printf("yoshni kiriting: ");
    scanf("%d", &a);
        printf("tayorgarlik balini kiriting: ");
    scanf("%d", &b);
    
    if(a>=16 && b>=50){
        printf("imtihonga kirishi mumkin");
    } else {
        printf("Imtihonga kira olmaydi");
    }
       
        
    return 0;
}