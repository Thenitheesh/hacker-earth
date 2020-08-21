#include <stdio.h>
void main()
{
int t;
scanf("%d", &t);
while(t--)
{
	int n;
	scanf("%d", &n);
	int a[3] ={0,0,0};  //5 10 15
	int check = 0;
	for(int i = 0; i<n; i++)
	{
		int x;
		scanf("%d", &x);
		if(x==5)
		{
			a[0]++;
		}
		else if(x==10)
		{
			if(a[0]>=1)
			{
				a[1]++;
				a[0]--;
			}
			else
			{
				check++;
			}
		}
		else
		{
			if(a[1]>=1)
			{
				a[2]++;
				a[1]--;
			}
			else if(a[0]>=2)
			{
				a[2]++;
				a[0]-=2;
			}
			else
			{
				check++;
			}
		}

	}
	if(check==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
}
