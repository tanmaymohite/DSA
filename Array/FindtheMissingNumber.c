/*
Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
Output: 6
Explanation: All the numbers from 1 to 8 are present except 6.

Input: arr[] = [1, 2, 3, 5]
Output: 4
Explanation: Here the size of the array is 4, so the range will be [1, 5]. The missing number between 1 to 5 is 4*/

    #include <stdio.h>
    #include<conio.h>
    #include<stdbool.h>
    #include<stdlib.h>


    int main()
    {
        int n;
       
        printf("Enter Size of array: ");
        scanf("%d",&n);

        int *intarr=(int*)malloc(n*sizeof(int));

        for(int i=0;i<n;i++){
            scanf("%d",&intarr[i]);
        }

        for(int i=0;i<n;i++){
            printf("%d ",intarr[i]);
        }
    
        int totalnumber = n+1;//7+1=8
        int expectedsum = totalnumber*(totalnumber+1)/2; 
        int actualsum=0;
        for(int i=0;i<n;i++)
        {
            actualsum+=intarr[i];//actualsum=8
        }
    
        int missing=expectedsum-actualsum;
        printf("\nMissing Number: %d",missing);
    }

    
    

