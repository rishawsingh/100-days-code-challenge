#include <stdio.h>

int main(void) {
    int i,n,A[100],j,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (A[j] > A[j+1] && A[j+1]<0)
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]= temp;
            }  
            
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
	// your code goes here
	return 0;
}
