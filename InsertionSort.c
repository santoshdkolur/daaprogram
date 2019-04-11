#include<stdio.h>
int main()
{
	int n,i,a[10],j,item;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		j=i-1;item=a[i];
		while(j>=0&&a[i]<a[j])
		{
			a[j+1]=a[j];
			j=j-1;

		}
	a[j+1]=item;
	}
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}