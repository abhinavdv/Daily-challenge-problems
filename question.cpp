#include <stdio.h>
int main()
{
	int i,a,b,j,k=0;
	cin >> a >> b; 
	//scanf("%d%d",&a,&b);
	int z[a],x[a],y[b];
	for(i=0;i<a;i++)
	{
		cinn >> z[i] >> x[i];
		//scanf("%d%d",&z[i],&x[i]);
	}
	for(i=0;i<b;i++)
	{
		y[i]=i+1;

	}	
	for(i=0;i<a;i++)
		for(j=z[i];j<=x[i];j++)
		{	

			y[j-1]=0;
			

		}
	for(i=0;i<b;i++)
	{
		if(y[i]!=0)
			k++;
	}	
	cout << k;
	//printf("%d\n",k);
	for(i=0;i<b;i++)
	{
		if(y[i]!=0)
			cout << y[i];
			//printf("%d ",y[i]);
	}	

}
