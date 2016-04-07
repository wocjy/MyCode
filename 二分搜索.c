#include <stdio.h>
int cc;
int find(int data[],int x,int left,int right)
{
	int mid;
	while(left<=right){
		mid=(left+right)/2;

		if(x=data[mid])
			return mid+1;
		if(x<data[mid])
			return right=mid-1;
		else
			return left=mid+1;
	}
	return 0;
}
int main()
{
	int k;
	int i,n,loc,x;
	int *data;
	scanf("%d",&k);
	while(k--){
		scanf("%d%d",&n,&x);
		data=(int *)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
			scanf("%d",&data[i]);
		cc=0;              //比较次数清零
		loc=find(data,x,0,n-1);
		printf("%d %d\n",loc,cc);

	}
	return 0;
}