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
//	bool graph1[MAX_SIZE][MAX_SIZE] =  //그래프1 니가그린기린그림 참조
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
//	bool graph2[MAX_SIZE][MAX_SIZE] =  //그래프2 니가그린기린그림 참조
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
//	bool graph3[MAX_SIZE][MAX_SIZE] =  //그래프3 니가그린기린그림 참조
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
//	btsQ.push(start);//0부터 시작할것
//
//	while (!btsQ.empty())//큐가비었을때까지 (stl empty 함수 이용)
//	{
//		int next = btsQ.front();
//		btsQ.pop();
//		cout << "나는 밀접방문자야:" << next + 1 << endl;
//		for (int i = 0; i < 10; i++)
//		{
//			if (!visit[i] && graph[next][i])//방문한적 없고 연결되어있는얘
//			{
//				btsQ.push(i);//대기열에 넣어버리기
//				visit[i] = true;//얘가 없으면 트루로 안하고 계속 돌아가니까 무한루프 빠지니 꼭 넣을것
//			}
//		}
//	}
//}
//
//void dfs(bool graph[MAX_SIZE][MAX_SIZE], int st)//깊이 우선 탐색방식( 한곳 쭉 다 흝고가기)
//{
//	visit[st] = true;
//	cout << "한 우물만 파는 깊이우선탐색:" << st + 1 << endl;
//
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		int no = graph[st][i];
//		if (!visit[no])			dfs(graph,no);
//	}
//}