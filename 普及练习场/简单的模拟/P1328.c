#include<stdio.h>
int a[201],b[201];
int main()
{
	//0��ʾ����������1��ʾ��ʯͷ����2 ��ʾ��������3 ��ʾ�������ˡ���4��ʾ��˹���ˡ��� 
	int i,N,NA,NB,x,y;
	int scoreA=0,scoreB=0;
	scanf("%d %d %d",&N,&NA,&NB);	//�ֱ��ʾ������N�β�ȭ��СA��ȭ�����ڳ��ȣ�СB��ȭ�����ڳ��ȡ�
	
	for(i=0;i<NA;i++)
	{
		scanf("%d",&a[i]);			//�ڶ��а���NA������,��ʾСA��ȭ�Ĺ���
	}
	
	for(i=0;i<NB;i++)
	{
		scanf("%d",&b[i]);			//�����а���NB������,��ʾСB��ȭ�Ĺ���
	}
	x=0,y=0,scoreA=0,scoreB=0;
	for(i=0;i<N;i++)
	{
		//�ж�˭Ӯ��˭�ͼ�һ��
		if(a[x]==0 && b[y]==1)
			scoreB++;
		if(a[x]==0 && b[y]==2)
			scoreA++;
		if(a[x]==0 && b[y]==3)
			scoreA++;
		if(a[x]==0 && b[y]==4)
			scoreB++;
		if(a[x]==1 && b[y]==0)
			scoreA++;
		if(a[x]==1 && b[y]==2)
			scoreB++;
		if(a[x]==1 && b[y]==3)
			scoreA++;
		if(a[x]==1 && b[y]==4)
			scoreB++;
		if(a[x]==2 && b[y]==0)
			scoreB++;
		if(a[x]==2 && b[y]==1)
			scoreA++;
		if(a[x]==2 && b[y]==3)
			scoreB++;
		if(a[x]==2 && b[y]==4)
			scoreA++;	
		if(a[x]==3 && b[y]==0)
			scoreB++;
		if(a[x]==3 && b[y]==1)
			scoreB++;
		if(a[x]==3 && b[y]==2)
			scoreA++;
		if(a[x]==3 && b[y]==4)
			scoreA++;
		if(a[x]==4 && b[y]==0)
			scoreA++;
		if(a[x]==4 && b[y]==1)
			scoreA++;
		if(a[x]==4 && b[y]==2)
			scoreB++;
		if(a[x]==4 && b[y]==3)
			scoreB++;
		x++;
		y++;
		if(x==NA)//ʵ��ѭ������,(�±굽����NA)
			x=0;
		if(y==NB)//ʵ��ѭ������,(�±굽����NB)
			y=0;
	}
	printf("%d %d\n",scoreA,scoreB);
	return 0;
}
