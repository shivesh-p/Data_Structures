#include<stdio.h>
void main()
{
    int i,j,count,a[100][100],b[100][100],row[100],column[100],m,n,k;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
                count++;
        }
    }
    k=(m*n)/2;
    if(count>k)
    {
        printf("The matrix is sparse.\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]!=0)
                    {
                        b[i][j]=a[i][j];
                        row[i]=i;
                        column[j]=j;
                    }
                if(b[i][j]!='\0')
                {
                    printf("Element: %d \t",b[i][j]);
                    printf("Row NO: %d \t",row[i]+1);
                    printf("Column NO: %d \t\n",column[j]+1);
                }
            }
        }
    }
    else
        printf("The matrix is dense> it cant be converted to dense.");
}
