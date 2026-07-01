    #include <stdio.h>
    #include<conio.h>
    #include<stdbool.h>
    #include<stdlib.h>

    int* LinearSearch(int* intarr,int n,int num);

    int main()
    {
        int n,num;
        printf("Enter Size of array: ");
        scanf("%d",&n);

        int *intarr=(int*)malloc(n*sizeof(int));

        for(int i=0;i<n;i++){
            scanf("%d",&intarr[i]);
        }

        for(int i=0;i<n;i++){
            printf("%d ",intarr[i]);
        }

        printf("\nEnter Num : ");
        scanf("%d",&num);

        LinearSearch(intarr,n,num);
    }

    int* LinearSearch(int* intarr,int n,int num)
    {
        /*
        Input:
        arr[] = 1 2 3 4 5, num = 3  
        Output:
        2
        */
        for(int i=0;i<n;i++)
        {
            if(intarr[i]==num)
                printf("%d",i);
            else
                return -1;
        }
    }
    

