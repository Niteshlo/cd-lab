#include <stdio.h>
void main()
{
    int i,j,temp,size;
    int arr[10];
    printf("Enter the size of the array");
    scanf("%d",&size);
    printf("Enter the array..............");
    for(i=0;i<size;i++)
    {
        printf("Enter the elements %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // Code for Bubble Sort
   for(i=0;i<size;i++)
    {
	
    	for(j=0;j<size-i;j++)
    	{
    		if(arr[j]>arr[j+1])
    		{
    			temp=arr[j+1];
    			arr[j+1]=arr[j];
    			arr[j]=temp;
			}
		}
		printf("\nAfter %d iteraton array is: ",i+1);
		for(j=0;j<size;j++)
		printf("\t%d",arr[j]);
	}
	// End for Bubble Sort Code
    printf("\nSorted array is ...........\n");
    for(i=0;i<size;i++)
    printf("\t%d",arr[i]);
}
