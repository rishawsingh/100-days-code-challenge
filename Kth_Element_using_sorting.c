#include <stdio.h>

int main(void) {
    int i,n,A[100],temp=0,kele;
    scanf("%d",&n);
    scanf("%d",&kele);
    if(kele<n)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if (A[j] > A[j+1])
                {
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]= temp;
                }  
                
            }
        }
            printf("%d ",A[0+kele]);
            
            printf("%d ",A[(n-1)-kele]);
    }
	// your code goes here
	return 0;
}
