#include <stdio.h>
#include<stdlib.h>
int main()
{
    int intArr[5] = {10, 30, 60, 50, 20};
    
    int max=intArr[0];//intarr=10
    for(int i=1;i<5;i++){
         //     i
         //0    1   2   3   4   5
         //10   30  40  50  20    
        if(intArr[i]>max){
            max=intArr[i];
        } 
    }
    printf("Largest Element: %d",max);

    return 0;
}