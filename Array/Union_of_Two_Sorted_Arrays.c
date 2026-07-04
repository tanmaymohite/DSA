    #include <stdio.h>
    #include<conio.h>
    #include<stdbool.h>
    #include<stdlib.h>

    void UnionOftwosortedArray(int* intarr,int* intarr1,int n,int m);

    int main()
    {
        int n,m;
       
        printf("Enter Size of array: ");
        scanf("%d",&n);

        int *intarr=(int*)malloc(n*sizeof(int));

        for(int i=0;i<n;i++){
            scanf("%d",&intarr[i]);
        }

        for(int i=0;i<n;i++){
            printf("%d ",intarr[i]);
        }

        printf("\nEnter Size of array: ");
        scanf("%d",&m);

        int *intarr1=(int*)malloc(m*sizeof(int));

        for(int i=0;i<m;i++){
            scanf("%d",&intarr1[i]);
        }

        for(int i=0;i<m;i++){
            printf("%d ",intarr1[i]);
        }

        UnionOftwosortedArray(intarr,intarr1,n,m);

        
    }

    void UnionOftwosortedArray(int* intarr,int* intarr1,int n,int m)
    {
        //Input:n = 5,m = 5 arr1[] = {1,2,3,4,5}  arr2[] = {2,3,4,4,5}
        //Output: {1,2,3,4,5}

        //union
        //k
        //0     1   2   3  
        //1     2   3   4       

        //intarr
        //                  i
        //0     1   2   3   4     
        //1     2   3   4   5

        //intarr1
        //              j
        //0     1   2   3   4     
        //2     3   4   4   5
        int k=0;     
        int unionArr[n+m];
        int i=0,j=0;

        while(i<n && j<m)
        {
            if(k>0 && unionArr[k-1]==intarr[i]){
                i++;
                continue;
            }

            if(k>0 && unionArr[k-1]==intarr1[j]){
                j++;
                continue;
            }
            if(intarr[i]<intarr1[j])
            {
                unionArr[k++]=intarr[i];
                i++;
            }
            
            else if(intarr[i]==intarr1[j])
            {
                unionArr[k++]=intarr[i];
                i++;
                j++;
            }

            else if(intarr1[j]<intarr[i])
            {
                unionArr[k++]=intarr1[j];
                j++;
            }
            
        }

        while (i<n)
        {
            unionArr[k++]=intarr[i];
            i++;
        }

        while (j<m)
        {
            unionArr[k++]=intarr1[j];
            j++;
        }
        
        printf("\n");
        for(int m=0;m<k;m++)
        {
            printf("%d  ",unionArr[m]);
        }
        

        return;
    }
    

