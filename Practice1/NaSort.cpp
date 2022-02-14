//#include <iostream>
//#include <vector>
//using namespace std;
//
///*전체적으로 한번 쓱 흝고 조금 가서 또 흝고 한칸가고 또 흝고 식으로 정렬을 한다. 시간복잡도 개느리쥬On2*/
//void select(vector<int>& vec);
//
////삽입정렬은 음  1 5 47 8 7  이렇게 있었다 치면 1: 1 5 47 8 7    2: 1 5 47 8 7    3: 1 5 8 47 7  4: 1 5 7 8 47 이니까 하나씩 다 돌면서 삽입을 해야겠지?
////그러니까 on2마냥 하나씩 돌고 다시 하나씩 돌고 백만년 조이기 하면 끝날거로 예상 된다
////근데! 한번다 돌았는데(1회전 했는데) 아직도 정렬 안되면 또돌고 또 돌고 해야되니 대충 정렬 되었을때 ( 개막장 정렬상태가 아닐 때 ) 효율이 좋을 것 같다.
//void insert(vector<int>& vec);
//
///*이 버블정렬 코드를 짜니 왜 버블정렬인지 알 것 같다 마치 느낌이 큰숫자가 물속에 거품마냥 뽀글뽀글 올라오는거처럼 순서 순서 천천히 맞추는 느낌이 든다
//일단 짜기는 디따쉬움 우리집 물고기가 맨날 보던 버블이라고 어항에서 나와서 짜고 다시 들어감*/
//void bubble(vector<int>& vec);//만만하기 그지없구나
//
///*병합정렬은 보고 나서 다시 짜 봣을때 전체적으로 풀어헤치고 다시 붙이는 느낌이 강했다
//굳이 비유하면 꼬인 이어폰 칼로 다 잘라놓고 다시 뽄드로 이어붙이는느낌*/
//void mermer(vector<int>& vec, int start, int mid, int end);
//void merge(vector<int>& vec, int start, int end);
//
//void quick(vector<int>& vec, int start, int finish);//잔혹한 백만년 조이기의 정렬현장 잔혹해서 정렬속도가 빠름 
//
//int main()
//{
//	srand((unsigned int)time(NULL));//  <- 진작에 심도있게 알아보길 잘 했다고 생각
//	vector<int> selecter;
//	vector<int> inserter;
//	vector<int> bubbler;
//	vector<int> merger;
//	vector<int> quicker;
//	int R;
//	for (int i = 0; i <= 100; i++)
//	{
//		R = rand() % 101;
//		selecter.push_back(R);
//		inserter.push_back(R);
//		bubbler.push_back(R);
//		merger.push_back(R);
//		quicker.push_back(R);
//	}
//
//	cout << "나는 노정렬이야:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << selecter.at(i) << " , ";
//	}
//
//	select(selecter);
//
//	cout << endl << endl << "나는 선택정렬이야:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << selecter.at(i) << " , ";
//	}
//
//	merge(merger, 0, merger.size() - 1);
//
//	cout << endl << endl << "나는 병합정렬이야:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << merger.at(i) << " , ";
//	}
//
//	bubble(bubbler);
//
//	cout << endl << endl << "나는 버블정렬이야:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << bubbler.at(i) << " , ";
//	}
//
//	insert(inserter);
//
//	cout << endl << endl << "나는 삽입정렬이야:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << inserter.at(i) << " , ";
//	}
//
//	quick(quicker, 0, (quicker.size() - 1));
//
//	cout << endl << endl << "나는 퀵정렬이야:";
//
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << quicker.at(i) << " , ";
//	}
//
//	return 0;
//} 
//
//void select(vector<int>& vec)
//{
//	for (int i = 0; i < vec.size(); i++)//선택정렬 0부터 사이즈까지 
//	{
//		int target = i;//작은 인덱스 i에 할당한다 근까 처음엔 작은인덱스가 0 1 2 3 4 .... 하면서 작은 인덱스가 점점 커진다.
//		for (int j = i + 1; j < vec.size(); j++)//i 안에 j를 또 넣어서 2중포문을 돌린다 j가 마치면 다시 i+1 되는식
//		{
//			if (vec[j] < vec[target])//만약에 j가 처음에 i값보다 큰걸 발견한다면 (정렬할 애를 발견한다면)
//				target = j;//작은값을 j로 바꿔준다
//		}
//		//스왑 주구장ㅈ창하던것
//		int temp = vec[i];
//		vec[i] = vec[target];
//		vec[target] = temp;   //아까 타겟값하고 i값하고 바꿔준다. 정렬의 현장
//	}
//}
//
//void insert(vector<int>& vec)
//{
//	int j;
//	for (int i = 1; i < vec.size(); i++)           //갑자기 난데없이 떠오른것: 어차피 첫번째값은 정렬할 필요가 없는데 뭐하러 0부터 시작을 했느냐  
////수정전:for (int i = 0; i < vec.size(); i++)                                       
//	{
//		int mid = vec[i]; //기준점을 돌고잇는 i를 기준으로 잡아준다. 그러니까 다끝내고 다음으로 간다 또끝내고 다음으로간다 이런느낌
//		for (j = i - 1; j >= 0 && vec[j] > mid; j--)
//		{
//			vec[j + 1] = vec[j];//잔혹한 정렬의 현장 
//		}
//
//		vec[++j] = mid;
//	}
//}
//
//void bubble(vector<int>& vec)
//{
//	for (int i = 0; i < vec.size(); i++) //i0부터 들어온사이즈까지
//	{
//		for (int j = 0; j < (vec.size() - 1) - i; j++)//j0부터 들어온사이즈까지 
//		{
//			if (vec[j] > vec[j + 1])//앗 이녀석 오른쪽배열보다 크다니! (오른쪽 배열보다 크다!)
//			{
//				int temp = vec[j];//스왑 나도 주구장창 하겠다 바로 옆에 얘랑 바꿔치기 할거야
//				vec[j] = vec[j + 1];
//				vec[j + 1] = temp;
//
//			}
//		}
//	}
//}
//
//void mermer(vector<int>& vec, int start, int mid, int end)
//{
//	vector<int> caramelsortedmukgoshipda;//카라멜솔티드먹고싶다를 벡터로 정의
//	int left = start;  //왼쪽값 = 시작
//	int right = mid + 1; // 오른쪽값 = 가운데+1
//
//	while (left <= mid && right <= end)//이조건이 거짓이 되면 한번 다 돌았다는 뜻임.
//	{
//		if (vec[left] < vec[right])//값을 차례로 레프트 라이트 차곡차곡 정렬한다.
//		{
//			caramelsortedmukgoshipda.push_back(vec[left]);
//			left++;
//		}
//		else
//		{
//			caramelsortedmukgoshipda.push_back(vec[right]);
//			right++;
//		}
//	}
//
//	if (left > mid)//소진 되었을때 나머지 값은 정렬 할 필요가 없으니 그냥 있던 순서대로 주르르륵 정렬 하고 마친다. 
//	{
//		for (int i = right; i <= end; i++)
//		{
//			caramelsortedmukgoshipda.push_back(vec[i]);
//		}
//	}
//	else if (right > end)
//	{
//		for (int i = left; i <= mid; i++)
//		{
//			caramelsortedmukgoshipda.push_back(vec[i]);
//		}
//	}
//
//	for (int i = start; i <= end; i++)
//	{
//		vec[i] = caramelsortedmukgoshipda[i - start];
//	}
//}
//
//void merge(vector<int>& vec, int start, int end)
//{
//	if (start == end)
//		return;
//
//	int mid = (start + end) / 2; //일단 반을 나눈다
//	merge(vec, start, mid); //앞을 기준으로 쪼갠다
//	merge(vec, mid + 1, end); //뒤를 기준으로 쪼갠다
//
//	mermer(vec, start, mid, end);//정렬되지 않으면 못 나오는 방(멀멀 함수 호출) 
//}
//
//void quick(vector<int>& vec, int start, int finish)
//{
//	if (start >= finish)//무한재귀를 막는 마법의 주문 (만약! 스타트가 더 크거나 피니시랑 같다 . <= 이소리는 데이터가 (요소가) 하나밖에 안남았거나 하나밖에 없다
//	{                                                                               //이것을 안하면 무한재귀에 빠지게 됨
//		return;//백만년 조이기를 중단하는 마법의 주문
//	}
//
//	int piv = start;//피브값 스타트값 할당
//	int i = piv + 1;  //i 는 피브값+1 에서 출동한다 (피브+1에서 출발)
//	int j = finish;      //j 는 피니시 라인부터 출동한다 (끝날지점에서 뒤로가는얘)
//	int temp;         //임시 저장소 직박구리폴더
//
//	while (i <= j)//i값이 j값보다 커질때까지 ( 가운데로 올 때까지 ) 이짓을 한다.     i값은 ++ 되고 j값은-- 되니까 언젠가는 주식 떡상마냥 그렇게 된다
//	{
//		while (i <= finish && vec[i] <= vec[piv])//i 는 피브보다 큰값을 찾는 무시무시한 변수이다. 거의 사이언스베슬 
//		{
//			i++;// 아래부터 위쪽으로 검문하는얘 (배열 1부터 흝는다)(오른쪽에서 출발함)
//		}
//
//		while (j > start && vec[j] >= vec[piv])// 반대로 k 는 피브보다 작은 값을 찾는 극악무도한 변수이다. 거의 오버로드 
//		{
//			j--;// 위부터 아래쪽으로 검문하는얘 
//		}
//		/*종합적으로 봤을때 i와 j는 서로 반대방향에서 흝다가 피브를 기준으로 피브 보다 큰 값, 작은값을 가지고 아래로 간다*/
//
//		/*불순분자를 착하게 만들어주는 곳*/
//		if (i > j)//i값이 j값보다 크다면?
//		{
//			temp = vec[j];
//			vec[j] = vec[piv];
//			vec[piv] = temp;//j와 피브 값을 교환해준다.
//		}
//		else if (i <= j)//i값이 j값보다 작거나 같다면?
//		{
//			temp = vec[i];
//			vec[i] = vec[j];
//			vec[j] = temp;//i값과 j값을 교환해준다 
//		}
//
//		/*위에서 걸리면 j와 피브값이 바뀌고 (기준값을 위로 보낸뒤 j값을 기준점으로 다시 맞춘다)  아래서 걸리면 i와j값이 바뀐다(아래있는 큰 값을 위로 보낸다)*/
//	}
//	quick(vec, start, j - 1);// j를 기준으로 잡고 나머지 안한 정렬 왼쪽을 주르륵 정렬함
//	quick(vec, j + 1, finish);// 위 정렬을 마치면 return이 걸려서 다시 오른쪽으로 주르륵 정렬은 반복한다. 마찬가지로 끝나면 리턴을 통해 순차적으로 끝난다.
//}
