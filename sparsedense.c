#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],row[10],column[10],i,j,count,m,n,k,c,d;
    printf("Enter the number of rows: \n");
    scanf("%d",&m);
    printf("Enter the number of columns: \n");
    scanf("%d",&n);
    printf("Enter the elements in the matrix: \n");
    for (i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            b[i][j]=0;
            printf("Enter the element at %d %d \n",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }

    k=(m*n)/2;
    for (i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            if(a[i][j]==0)
                count+=1;
        }
    }

    if(count>k)
    {
        for (i=0 ; i<m ; i++)
        {
            for(j=0 ; j<n ; j++)
            {
                if(a[i][j] != 0)
                {
                    b[i][j]=a[i][j];
                    row[i]=i;
                    column[j]=j;
                }
                if(b[i][j]!='\0')
                {
                    printf("Row No: %d \n",row[i]+1);
                    printf("Column No: No: %d \n",column[j]+1);
                    printf("Value: %d \n",b[i][j]);
                    printf("\n\n");
                }
            }

        }
    }
    else
    {
        printf("Can't Convert From Dense to Sparse. \n");
    }
}
