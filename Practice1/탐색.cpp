//#include<iostream>
//#include<conio.h>
//#include<queue>
//#define MAX_SIZE 8
//using namespace std;
//
//void bts(bool graph[MAX_SIZE][MAX_SIZE], int start);
//void dfs(bool graph[MAX_SIZE][MAX_SIZE], int start);
//bool visit[MAX_SIZE] = { false };
//
//int main()
//{
//	bool graph1[MAX_SIZE][MAX_SIZE] =  //�׷���1 �ϰ��׸��⸰�׸� ����
//	{      /*1  2  3  4  5  6  7  8*/
//			{0, 1, 1, 0, 0, 0, 0, 1},//1
//			{1, 0, 0, 0, 0, 0, 1, 0},//2
//			{1, 0, 0, 1, 1, 0, 0, 0},//3
//			{0, 0, 1, 0, 1, 0, 0, 0},//4
//			{0, 0, 1, 1, 0, 0, 0, 0},//5
//			{0, 0, 0, 0, 0, 0, 1, 0},//6
//			{0, 1, 0, 0, 0, 1, 0, 1},//7
//			{1, 0, 0, 0, 0, 0, 1, 0} //8
//	};
//
//	bool graph2[MAX_SIZE][MAX_SIZE] =  //�׷���2 �ϰ��׸��⸰�׸� ����
//	{      /*1  2  3  4  5  6  7  8*/
//			{0, 1, 0, 1, 0, 0, 0, 1},//1
//			{1, 0, 0, 0, 1, 0, 1, 0},//2
//			{0, 0, 0, 0, 1, 0, 0, 0},//3
//			{1, 0, 0, 0, 1, 0, 0, 0},//4
//			{0, 1, 1, 1, 0, 1, 0, 1},//5
//			{0, 0, 0, 0, 1, 0, 0, 0},//6
//			{0, 1, 0, 0, 0, 0, 0, 1},//7
//			{1, 0, 0, 0, 1, 0, 1, 0} //8
//	};
//
//	bool graph3[MAX_SIZE][MAX_SIZE] =  //�׷���3 �ϰ��׸��⸰�׸� ����
//	{      /*1  2  3  4  5  6  7  8*/
//			{0, 1, 1, 0, 0, 1, 0, 1},//1
//			{1, 0, 0, 1, 0, 0, 0, 0},//2
//			{1, 0, 0, 0, 1, 0, 0, 1},//3
//			{0, 1, 0, 0, 1, 0, 0, 0},//4
//			{0, 0, 1, 1, 0, 0, 0, 0},//5
//			{1, 0, 0, 0, 0, 0, 0, 0},//6
//			{0, 0, 0, 0, 0, 0, 0, 1},//7
//			{1, 0, 1, 0, 0, 0, 1, 0} //8
//	};
//
//	dfs(graph1, 0);
//
//	cout << endl << endl;
//
//	bts(graph1, 0);
//
//	return 0;
//}
//
//void bts(bool graph[MAX_SIZE][MAX_SIZE], int start)
//{
//	bool visit[MAX_SIZE] = { false };
//	queue<int> btsQ;
//	btsQ.push(start);//0���� �����Ұ�
//
//	while (!btsQ.empty())//ť������������� (stl empty �Լ� �̿�)
//	{
//		int next = btsQ.front();
//		btsQ.pop();
//		cout << "���� �����湮�ھ�:" << next + 1 << endl;
//		for (int i = 0; i < 10; i++)
//		{
//			if (!visit[i] && graph[next][i])//�湮���� ���� ����Ǿ��ִ¾�
//			{
//				btsQ.push(i);//��⿭�� �־������
//				visit[i] = true;//�갡 ������ Ʈ��� ���ϰ� ��� ���ư��ϱ� ���ѷ��� ������ �� ������
//			}
//		}
//	}
//}
//
//void dfs(bool graph[MAX_SIZE][MAX_SIZE], int st)//���� �켱 Ž�����( �Ѱ� �� �� �y����)
//{
//	visit[st] = true;
//	cout << "�� �칰�� �Ĵ� ���̿켱Ž��:" << st + 1 << endl;
//
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		int no = graph[st][i];
//		if (!visit[no])			dfs(graph,no);
//	}
//}