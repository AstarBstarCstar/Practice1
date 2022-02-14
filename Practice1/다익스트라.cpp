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
/* 그래프1 최단 거리 결과
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
/* 그래프2 최단거리 결과
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
/* 그래프3 최단거리 결과
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

//TODO:코드를 구현 우선 목적으로 난잡하고 간략화 하지 못 했는데 우선 제출하고, 조만간 마저 간략화 하겠습니다. 
//간략화, 재활용 가능 한 부분이 많이 보입니다. 
// 
//TODO:1. 함수 호출 하는 부분 함수를 아예 스위치문으로 바꿔서 몇번째 볼래? 식으로 바꿀것
//TODO:2. 다익스트라 내에서 갱신하는 부분만 따로 따서 update 함수를 만들어서 함수 더 간략화 할것
//TODO:3. 함수를 1,2,3, 이렇게 하지말고 함수를 아예 하나로 하고 배열을 인자로 받으면 더 깔끔해질것
//TODO:4. 그래프를 전역으로 선언 하지 말고 메인 내에서 선언하는것으로 바꿀것
int main()
{
	int C = 0;
	int temp;
	int dist[GSIZE];
	int dist2[GSIZE];
	int dist3[GSIZE];

	cout << "Graph1의 결과:" << endl;
	for (int j = 0; j < GSIZE; j++)
	{
		dajinmanle(j, dist);
		for (int i = 0; i < GSIZE; i++)
		{
			cout << dist[i] << " , ";
			C++;
			if (C % 9 == 0)//뭔가 깔끔하게 정렬하려고 나머지 연산으로 깔끔쓰
				cout << endl;
		}
	}	

	cout << endl << endl<< "Graph2의 결과:"<<endl;
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
		cout << endl << endl<< "Graph3의 결과:"<<endl;
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


//TODO:코드 전체적으로 재활용 한게 눈에 띄게 보이는데 우선 구현목적으로 마구잡이로 함
//코드 간략화,깔끔하게 할것, 위에 함수 호출부분도 간략하게 충분히 가능한데 마구잡이로 한 부분 고칠것

void dajinmanle(int start, int dis[GSIZE])
{
	bool visit[GSIZE] = { false };//0으로 몽땅 초기화
	for (int i = 0; i < GSIZE; i++)
	{
		dis[i] = graph1[start][i];//그래프 dis<<그래프 정보 넣기 (코드 최적화 가능부분)
	}
	visit[start] = true;//방문한곳 1로

	for (int i = 0; i < GSIZE; i++)//방문 안했거나 가장 가까운 부분 감지
	{
		int next = 0;//넥스트 0
		int mindis = INF;// 가장 가까운거리는 가장 크게 초기화시킴 ex) 1들어오면 999vs 1 하면 1이 짧으니까 짧은거리가 계속 들어오겠지?

		for (int j = 0; j < GSIZE; j++)
		{
			if (!visit[j] && dis[j] < mindis)//안방문했으면서<<방문했다 !>>안방문했다 , 민디스 가장 가까운얘 탐색하기
			{
				next = j;//발견했으면 민디스, 넥스트 갱신해주기 TODO:이부분부터 아래까지 간략화 가능할듯
				mindis = dis[j];
			}
		}

		visit[next] = true;
		for (int j = 0; j < GSIZE; j++)
		{
			if (dis[j] > dis[next] + graph1[next][j])//만약에 다른 거리가 디스보다 더 짧다
			{
				dis[j] = dis[next] + graph1[next][j];//다른거리를 갱신해준다 
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