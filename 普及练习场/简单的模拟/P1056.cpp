/*
	ͬѧ���ڽ�����������M��N�У����ڵ�i�е�j�е�ͬѧ��λ����(i,j)
	Ϊ�˷���ͬѧ�ǽ������ڽ�����������K�������ͨ����L�������ͨ��
*/

#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
struct zb
{
	int x;
	int y;
	int p;
	int q;
};
struct zb a[10000];
int main()
{
	int i,j,M,N,K,L,D;
	int b[5000];
	int c[5000]; 
	scanf("%d %d %d %d %d",&M,&N,&K,&L,&D);//��һ�У���5���ÿո�������������ֱ���M,N,K,L,D
	/*��������D�У�ÿ����4���ÿո��������������i�е�4������Xi,Yi,Pi,Qi
	��ʾ����λ�� (Xi,Yi)��(Pi,Qi)������ͬѧ�ύͷ�Ӷ������뱣֤����ǰ�����ڻ����������ڣ�*/
	for(i=1;i<=D;i++)
	{
		scanf("%d %d %d %d",&a[i].x,&a[i].y,&a[i].p,&a[i].q);
	}
	
	for(i=1;i<=D;i++)
	{
		if(a[i].x!=a[i].p) 
		{
			b[min(a[i].x,a[i].p)]++; 
		}
		else if(a[i].y!=a[i].q) 
		{
			c[min(a[i].y,a[i].q)]++;
		}
	}
	
	for(i=1;i<=M;i++)
	{
		if(b[i]!=0)
			cout<<i<<" ";
	}
	cout<<endl;
	for(i=1;i<=N;i++)
	{
		if(c[i]!=0)
			cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
