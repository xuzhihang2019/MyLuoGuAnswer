#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int> qu;
	bool isInQu[2000]={false};//bool���͵����飬һ�����ڶ�������ø��±�Ԫ��Ϊtrue 
	int i,j,M,N;
	int find=0;
	int wenzhang[2000];
	cin>>M>>N; //�ڴ�����  ���µĳ���
	//�ڶ���ΪN���Ǹ��������������µ�˳��ÿ��������һ��Ӣ�ĵ��ʡ�
	for(i=0;i<N;i++)
	{
		cin>>wenzhang[i];
		if(isInQu[wenzhang[i]])//�������ڴ��� 
		{
			continue;
		}
		else//���ʲ����ڴ���
		{
			if(qu.size()>M-1)//���ʲ����ڴ������ڴ�����
			{
				isInQu[qu.front()]=false;
				qu.pop();//��������ڴ���Ǹ����ʳ�����,�Ҹ��±�Ԫ�ر�Ϊfalse
				qu.push(wenzhang[i]);//�����µ��� 
				isInQu[qu.back()]=true;
				find++;
			}
			else//���ʲ����ڴ������ڴ�û�� 
			{
				qu.push(wenzhang[i]);//���µ��ʴ���һ��δʹ�õ��ڴ浥Ԫ
				isInQu[qu.back()]=true;
				find++;
			}
		}
	}
	cout<<find<<endl;
	return 0;
}
