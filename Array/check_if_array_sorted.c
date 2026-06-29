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

        /*
        for(int i=0;i<n;i++){
            printf("%d ",intarr[i]);
        }

        */
        //i     
        //0     1   2   3   4   5
        //1     2   3   4   5
        
        bool sorted=true;

        for(int i=0;i<n-1;i++){
            if(intarr[i]>intarr[i+1]) {
                sorted=false;
                break;
            }
        }
        if(sorted)
            printf("True");
        else
            printf("False");
        return 0;
    }