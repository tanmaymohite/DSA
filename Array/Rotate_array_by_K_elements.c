    #include <stdio.h>
    #include<conio.h>
    #include<stdbool.h>
    #include<stdlib.h>


    int *rotate_array_by_k(int *intarr,int n,int k);

    int main()
    {
        int n,k;
        printf("Enter Size of array: ");
        scanf("%d",&n);

        printf("How Many You have to Rotate: ");
        scanf("%d",&k);

        int *intarr=(int*)malloc(n*sizeof(int));

        for(int i=0;i<n;i++){
            scanf("%d",&intarr[i]);
        }

        for(int i=0;i<n;i++){
            printf("%d ",intarr[i]);
        }

 
        rotate_array_by_k(intarr,n,k);

        printf("\nArray after changes:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ", intarr[i]);
        }
    }

    int *rotate_array_by_k(int *intarr,int n,int k)
    {    
        //Input: [1, 2, 3, 4, 5]  
        //Output: [2, 3, 4, 5, 1]

        //              i
        //0     1   2   3   4   5
        //1     2   3   4   5   6
        int j=0;
        while(j<k)
        {
            int temp=intarr[0];//temp = 1
            for(int i=0;i<n-1;i++)
            {
                intarr[i]=intarr[i+1];  
                //1     2   3   4   5
            }
            intarr[n-1]=temp;
            j++;
        }
        return intarr;
    }

