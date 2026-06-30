    #include <stdio.h>
    #include<conio.h>
    #include<stdbool.h>
    #include<stdlib.h>

    int* removeduplicate(int *intarr,int n);

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

        removeduplicate(intarr,n);
        
        printf("\nArray after changes:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ", intarr[i]);
        }
    }
    //                      i   j
    //0     1   2   3   4   5   6   7
    //1    -1   2   -1  -1   3   -1     

    //Output: 1   2   3
    int* removeduplicate(int *intarr,int n)
    {
        int answer[n],k=0;
        for(int i=0;i<n-1;i++)//i=0,1,2,3,4,5
        {
            if(intarr[i]==-1)
            {
                continue;
            }
            answer[k]=intarr[i];//  
            k++;
            //              k
            //0     1   2   3   4
            //1     2   3
            for(int j=i+1;j<n;j++)//j=6
            {
                if(intarr[j]==intarr[i])
                {
                    intarr[j]=-1;       
                }
            }
        }
        return intarr;
    }
    //1 1   2   2   2   3   3