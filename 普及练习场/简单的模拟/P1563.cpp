#include<iostream>
using namespace std;
struct toy
{
	int face;
	string name;
};
struct toy a[500000];//���鿪С�˻��в��Ե�RE 
int main()
{
	int i,n,m,ai,si;
	int x=1;
	cin>>n>>m;//С�˵ĸ�����ָ�������
	for(i=1;i<=n;i++)
	{
		cin>>a[i].face>>a[i].name;
	}
	for(i=1;i<=m;i++)
	{
		cin>>ai>>si;
		if(ai==a[x].face)//������ 
		{
			x=x-si;
			if(x<=0)
			{
				x=x+n;
			}
		}
		else//������ 
		{
			x=x+si;
			if(x>n)
			{
				x=x-n;
			}
		}
	}
	cout<<a[x].name<<endl;
	return 0;
}
