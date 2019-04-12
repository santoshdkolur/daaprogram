//Program doesn't work


#include<stdio.h>
int cost[10][10],n,source,q[10],f,r,s[10],i,j,u,v;
void bfs()
{
	for(i=1;i<=n;i++)
		s[i]=0;
	f=r=0;
	q[r]=source;
	s[source]=1;
	while(f<=r)
	{
		u=q[f++];
		for(v=1;v<=n;v++)
		{
			if(cost[v][v]==1&&s[v]==0)
			{
				s[v]=1;
				q[++r]=v;

			}
		}
	}
}
void main()
{
	printf("\nEnter no of vertices\n");
	scanf("%d",&n);
	printf("\nEnter the adjacency matrix\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&cost[i][j]);
		printf("\nEnter the source\n");
		scanf("%d",&source);
		bfs();
		for(i=1;i<=n;i++)
		{
			if(s[i]==0)
				printf("\nVertex %d not reachable\n",i);
			else
				printf("Vertex %d reachable\n",i);
		}
		for(i=1;i<=n;i++)
			printf("\t%d",q[i]);
	}
