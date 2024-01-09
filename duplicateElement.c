#include<stdio.h>
int main() 
{
    int i,n,j,temp,count=1;
    printf("Enter the no of elememmts\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\t");
    }
    printf("\nElement\tOccurrences\n");
    for (i = 1; i < n; i++) 
    {
        if (a[i] == a[i - 1]) 
        {
            count++;
        } 
        else 
        {
            printf("%d\t%d\n", a[i - 1], count);
            count = 1;
        }
    }
    printf("%d\t%d\n", a[n - 1], count); // Print the count for the last element

    return 0;
}