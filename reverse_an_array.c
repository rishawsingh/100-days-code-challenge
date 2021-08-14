#include <stdio.h>

int main(void) {
    int i,n,A[100],j,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    i=0;
    j=n-1;
    while(i<j)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]= temp;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    {
         printf("%d ",A[i]);
    }
	// your code goes here
	return 0;
}
