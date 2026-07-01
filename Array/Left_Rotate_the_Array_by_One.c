    #include <stdio.h>
    #include<conio.h>
    #include<stdbool.h>
    #include<stdlib.h>


    int *left_rotate_array(int *intarr,int n);

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

 
       left_rotate_array(intarr,n);

        printf("\nArray after changes:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ", intarr[i]);
        }
    }

    int *left_rotate_array(int *intarr,int n)
    {    
        //Input: [1, 2, 3, 4, 5]  
        //Output: [2, 3, 4, 5, 1]

        //              i
        //0     1   2   3   4   5
        //1     2   3   4   5
        int temp=intarr[0];//temp = 1
        for(int i=0;i<n-1;i++)
        {
            intarr[i]=intarr[i+1];  
            //1     2   3   4   5
        }
        intarr[n-1]=temp;
        return intarr;
    }

