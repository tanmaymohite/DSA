/*Example 1:
Input: prices = {1, 1, 0, 1, 1, 1}
Output: 3
Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.

Example 2:
Input: prices = {1, 0, 1, 1, 0, 1} 
Output: 2
Explanation: There are two consecutive 1's in the array. */ 
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
        //Input: prices = {1, 0, 1, 1, 0, 1}
        //Output: 2
        int count=0;//count=1,0,1,2
        int maxcount=0;//maxcount=1,1

        for(int i=0;i<n;i++){//i=0,1,2,3
            if(intarr[i]==1){
                count++;
                if(count>maxcount)//
                    maxcount=count; 
            }
            else
                count=0;
        }
        printf("\nOutput: %d",maxcount);
    
    }

    
    
