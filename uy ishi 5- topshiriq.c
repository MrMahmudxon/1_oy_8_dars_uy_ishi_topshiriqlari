
#include <stdio.h>
int main(){
    int a;
    printf("sonni kiriting: ");
    scanf("%d", &a);
    
    if(a%5==0 || a%10==0){
        printf("Mos keladi");
    } else {
        printf("mos kelmaydi");
    }
       
        
    return 0;
}