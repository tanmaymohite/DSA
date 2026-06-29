#include <stdio.h>
#include<stdlib.h>
int main()
{
    int intArr[5] = {10,10,10,10,10};
    int Largest=intArr[0];//LARGEST=10
    int secondlargest=-1;//secondlargest=10
         //i
         //0    1   2   3   4   5   6
         //10   5   20  8  15
    for(int i=1;i<5;i++){
        if(intArr[i]>Largest) {
            secondlargest=Largest;
            Largest=intArr[i];
        }
    }    
    for(int i=0;i<5;i++){
        //i=0 - 10>10 && 10<20 
        //i=1 - 5>10 && 5<20 
        //i=2 - 20>10 && 20<20 
        //i=3 - 8>10 && 8<20 
        //i=4 - 15>10 && 15<20 
        if(intArr[i]>secondlargest && intArr[i]<Largest)
            secondlargest=intArr[i];
            //secondlargest=15
    }
    printf("Second largest: %d",secondlargest);
    return 0;
}