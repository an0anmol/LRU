#include<stdio.h>
int main(int argc, char const *argv[])
{
int pages[100],frames[10],n,duplicate[10],i,j,fault=0,temp,index,flag=0,count;
scanf("%d",&n);
for (int i = 0; i < 20; ++i)
{
scanf("%d",&pages[i]);
}for (int i = 0; i < n; ++i)
{
	frames[i]=-1;
duplicate[i]=-1;
}

for (int i = 0; i < 20; ++i)
{
		if((n-1)<i)
		{	for (int j = 0; j < n; ++j)
				{
			
					if (frames[j]==pages[i])
						{
						flag=1;
						index=j;
						}
				}
			if (flag==0)
				{
					printf("--------------------------------------------------\n");
					printf("not macthed after capcatity%d\n",pages[i]);
					printf("--------------------------------------------------\n");
				
					frames[0]=pages[i];
					fault+=1;
					count=0;
					for (int k = 0; k < n; ++k)
						{
							if (k==0)
								{
									continue;
								}		
							else
									duplicate[count++]=frames[k];
						}
				duplicate[count]=frames[0];
				
				

				for (int z = 0; z < n; ++z)

				{
				
					frames[z]=duplicate[z];
					printf("--------------------------------------------------\n");
					printf("z----------\tfrmaes-z-----%d\n",frames[z]);
					}
				
		}

			else
				{	
				count=0;
					for (int k = 0; k < n; ++k)
						{
							if (k==index)
								{
									continue;
								}		
							else
									duplicate[count++]=frames[k];
						}
				duplicate[count]=frames[index];
				
				

				for (int z = 0; z < n; ++z)

				{
				
					frames[z]=duplicate[z];
					printf("--------------------------------------------------\n");
					printf("z----------\tfrmaes-z-----%d\n",frames[z]);
					}
				}
		flag=0;}
else
	{
		frames[i]=pages[i];
		fault+=1;
		printf("--------------------------------------------------\n");
	printf("---------\tfrmaes-first under capacity-----%d\n",frames[i]);
	
	printf("--------------------------------------------------\n");
	}






}

printf("%d\n",fault);

	return 0;
}
