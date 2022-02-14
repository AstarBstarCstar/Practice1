#include <iostream>
#include <conio.h>

#define INF	999
#define GSIZE	9

using namespace std;
void dajinmanle(int start, int dis[GSIZE]);
void dajinmanle2(int start, int dis[GSIZE]);
void dajinmanle3(int start, int dis[GSIZE]);

int graph1[GSIZE][GSIZE] =
{    /*1    2    3    4    5    6    7    8    9*/
	{  0, INF,   2, INF, INF, INF, INF, INF,   9},//1
	{INF,   0,   7, INF, INF, INF,   2, INF, INF},//2
	{  2,   7,   0, INF,  10,   8, INF, INF, INF},//3
	{INF, INF, INF,   0, INF, INF, INF, INF,   3},//4
	{INF, INF,  10, INF,   0, INF, INF,   6, INF},//5151
	{INF, INF,   8, INF, INF,   0, INF, INF, INF},//6
	{INF,   2, INF, INF, INF, INF,   0, INF,  11},//7
	{INF, INF, INF, INF,   6, INF, INF,   0, INF},//8
	{  9, INF, INF,   3, INF, INF, INF,  11,   0} //9
};
/* �׷���1 �ִ� �Ÿ� ���
0, 9, 2, 12, 12, 10, 11, 18, 9,
9, 0, 7, 16, 17, 15, 2, 23, 13,
2, 7, 0, 14, 10, 8, 9, 16, 11,
12, 21, 14, 0, 20, 22, 23, 14, 3,
12, 17, 10, 24, 0, 18, 19, 6, 21,
10, 15, 8, 22, 18, 0, 17, 24, 19,
11, 2, 9, 14, 19, 17, 0, 22, 11,
18, 23, 16, 30, 6, 24, 25, 0, 27,
9, 18, 11, 3, 17, 19, 20, 11, 0,
*/

int graph2[GSIZE][GSIZE] =
{    /*1    2    3    4    5    6    7    8    9*/
	{  0,   1, INF, INF, INF, INF,   6, INF, INF},//1
	{  1,   0, INF, INF, INF, INF, INF, INF,   7},//2
	{INF, INF,   0, INF, INF,   2, INF,   3, INF},//3
	{INF, INF, INF,   0, INF, INF, INF, INF,   4},//4
	{INF, INF, INF, INF,   0,   6, INF, INF, INF},//5
	{INF, INF,   2, INF,   6,   0, INF, INF,   1},//6
	{  6, INF, INF, INF, INF, INF,   0, INF, INF},//7
	{INF, INF,   3, INF, INF, INF, INF,   0, INF},//8
	{INF,   7, INF,   4, INF,   1, INF, INF,   0} //9
};
/* �׷���2 �ִܰŸ� ���
0, 1, 11, 12, 15, 9, 6, 14, 8,
1, 0, 10, 11, 14, 8, 7, 13, 7,
11, 10, 0, 7, 8, 2, 17, 3, 3,
12, 11, 7, 0, 11, 5, 18, 10, 4,
15, 14, 8, 11, 0, 6, 21, 11, 7,
9, 8, 2, 5, 6, 0, 15, 5, 1,
6, 7, 17, 18, 21, 15, 0, 20, 14,
14, 13, 3, 10, 11, 5, 20, 0, 6,
8, 7, 3, 4, 7, 1, 14, 6, 0,
*/


int graph3[GSIZE][GSIZE] =
{    /*1    2    3    4    5    6    7    8    9*/
	{  0, INF,   1,   3, INF, INF, INF,   5, INF},//1
	{INF,   0, INF, INF, INF,   4, INF, INF, INF},//2
	{INF, INF,   0, INF, INF, INF, INF, INF, INF},//3
	{  5, INF, INF,   0, INF, INF, INF, INF, INF},//4
	{INF, INF,   9, INF,   0, INF, INF, INF,   2},//5
	{  1, INF, INF, INF, INF,   0, INF,   6, INF},//6
	{INF, INF,   3, INF, INF, INF,   0, INF, INF},//7
	{INF,   1, INF, INF,   4, INF, INF,   0, INF},//8
	{INF, INF, INF,   2, INF, INF, INF, INF,   0} //9
};
/* �׷���3 �ִܰŸ� ���
0, 6, 1, 3, 9, 10, 99999, 5, 11,
5, 0, 6, 8, 14, 4, 99999, 10, 16,
99999, 99999, 0, 99999, 99999, 99999, 99999, 99999, 99999,
5, 11, 6, 0, 14, 15, 99999, 10, 16,
9, 15, 9, 4, 0, 19, 99999, 14, 2,
1, 7, 2, 4, 10, 0, 99999, 6, 12,
99999, 99999, 3, 99999, 99999, 99999, 0, 99999, 99999,
6, 1, 7, 8, 4, 5, 99999, 0, 6,
7, 13, 8, 2, 16, 17, 99999, 12, 0,
*/

//TODO:�ڵ带 ���� �켱 �������� �����ϰ� ����ȭ ���� �� �ߴµ� �켱 �����ϰ�, ������ ���� ����ȭ �ϰڽ��ϴ�. 
//����ȭ, ��Ȱ�� ���� �� �κ��� ���� ���Դϴ�. 
// 
//TODO:1. �Լ� ȣ�� �ϴ� �κ� �Լ��� �ƿ� ����ġ������ �ٲ㼭 ���° ����? ������ �ٲܰ�
//TODO:2. ���ͽ�Ʈ�� ������ �����ϴ� �κи� ���� ���� update �Լ��� ���� �Լ� �� ����ȭ �Ұ�
//TODO:3. �Լ��� 1,2,3, �̷��� �������� �Լ��� �ƿ� �ϳ��� �ϰ� �迭�� ���ڷ� ������ �� ���������
//TODO:4. �׷����� �������� ���� ���� ���� ���� ������ �����ϴ°����� �ٲܰ�
int main()
{
	int C = 0;
	int temp;
	int dist[GSIZE];
	int dist2[GSIZE];
	int dist3[GSIZE];

	cout << "Graph1�� ���:" << endl;
	for (int j = 0; j < GSIZE; j++)
	{
		dajinmanle(j, dist);
		for (int i = 0; i < GSIZE; i++)
		{
			cout << dist[i] << " , ";
			C++;
			if (C % 9 == 0)//���� ����ϰ� �����Ϸ��� ������ �������� �����
				cout << endl;
		}
	}	

	cout << endl << endl<< "Graph2�� ���:"<<endl;
	C = 0;
		for (int j = 0; j < GSIZE; j++)
		{
			dajinmanle2(j, dist2);
			for (int i = 0; i < GSIZE; i++)
			{
				cout << dist2[i] << " , ";
				C++;
				if (C % 9 == 0)
					cout << endl;
			}
		}
		cout << endl << endl<< "Graph3�� ���:"<<endl;
		C = 0;
		for (int j = 0; j < GSIZE; j++)
		{
			dajinmanle3(j, dist3);
			for (int i = 0; i < GSIZE; i++)
			{
				cout << dist3[i] << " , ";
				C++;
				if (C % 9 == 0)
					cout << endl;
			}
		}
	



	return 0;
}


//TODO:�ڵ� ��ü������ ��Ȱ�� �Ѱ� ���� ��� ���̴µ� �켱 ������������ �������̷� ��
//�ڵ� ����ȭ,����ϰ� �Ұ�, ���� �Լ� ȣ��κе� �����ϰ� ����� �����ѵ� �������̷� �� �κ� ��ĥ��

void dajinmanle(int start, int dis[GSIZE])
{
	bool visit[GSIZE] = { false };//0���� ���� �ʱ�ȭ
	for (int i = 0; i < GSIZE; i++)
	{
		dis[i] = graph1[start][i];//�׷��� dis<<�׷��� ���� �ֱ� (�ڵ� ����ȭ ���ɺκ�)
	}
	visit[start] = true;//�湮�Ѱ� 1��

	for (int i = 0; i < GSIZE; i++)//�湮 ���߰ų� ���� ����� �κ� ����
	{
		int next = 0;//�ؽ�Ʈ 0
		int mindis = INF;// ���� �����Ÿ��� ���� ũ�� �ʱ�ȭ��Ŵ ex) 1������ 999vs 1 �ϸ� 1�� ª���ϱ� ª���Ÿ��� ��� ��������?

		for (int j = 0; j < GSIZE; j++)
		{
			if (!visit[j] && dis[j] < mindis)//�ȹ湮�����鼭<<�湮�ߴ� !>>�ȹ湮�ߴ� , �ε� ���� ������ Ž���ϱ�
			{
				next = j;//�߰������� �ε�, �ؽ�Ʈ �������ֱ� TODO:�̺κк��� �Ʒ����� ����ȭ �����ҵ�
				mindis = dis[j];
			}
		}

		visit[next] = true;
		for (int j = 0; j < GSIZE; j++)
		{
			if (dis[j] > dis[next] + graph1[next][j])//���࿡ �ٸ� �Ÿ��� �𽺺��� �� ª��
			{
				dis[j] = dis[next] + graph1[next][j];//�ٸ��Ÿ��� �������ش� 
			}
		}
	}
}

void dajinmanle2(int start, int dis[GSIZE])
{
	bool visit[GSIZE] = { false };
	for (int i = 0; i < GSIZE; i++)
	{
		dis[i] = graph2[start][i];
	}
	visit[start] = true;

	for (int i = 0; i < GSIZE; i++)
	{
		int next = 0;
		int mindis = INF;
		for (int j = 0; j < GSIZE; j++)
		{
			if (!visit[j] && dis[j] < mindis)
			{
				next = j;
				mindis = dis[j];
			}
		}

		visit[next] = true;
		for (int j = 0; j < GSIZE; j++)
		{
			if (dis[j] > dis[next] + graph2[next][j])
			{
				dis[j] = dis[next] + graph2[next][j];
			}
		}
	}
}

void dajinmanle3(int start, int dis[GSIZE])
{
	bool visit[GSIZE] = { false };
	for (int i = 0; i < GSIZE; i++)
	{
		dis[i] = graph3[start][i];
	}
	visit[start] = true;

	for (int i = 0; i < GSIZE; i++)
	{
		int next = 0;
		int mindis = INF;
		for (int j = 0; j < GSIZE; j++)
		{
			if (!visit[j] && dis[j] < mindis)
			{
				next = j;
				mindis = dis[j];
			}
		}

		visit[next] = true;
		for (int j = 0; j < GSIZE; j++)
		{
			if (dis[j] > dis[next] + graph3[next][j])
			{
				dis[j] = dis[next] + graph3[next][j];
			}
		}
	}
}