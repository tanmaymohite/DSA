    #include <stdio.h>
    #include<conio.h>
    #include<stdbool.h>
    #include<stdlib.h>


    int* MoveZeroToEnd(int* intarr,int n);

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

        MoveZeroToEnd(intarr,n);

        printf("\nArray after changes:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ", intarr[i]);
        }
    }

    int* MoveZeroToEnd(int* intarr,int n)
    {
        //Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
        //Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0


        //      t
        //          i
        //0     1   2   3   4   5   6  7    8   
        //1     0   2   3   0   4   0  1
        int t=0;//0,1
        for(int i=0;i<n;i++)
        {
            if(intarr[i]!=0)
            {
                intarr[t]=intarr[i];//intarr[1]=1
                t++;
            }
        }
        
        while(t<n)
        {
            intarr[t]=0;
            t++;
        }
        return intarr;
    }

