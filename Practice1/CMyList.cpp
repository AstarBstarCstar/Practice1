//#include "CMyList.h"
//#include <iostream>
//#include <list>
//using namespace std;
//
//
//int main()
//{
//    list<int> stlList;//stl제공 list를 인트형으로 stlList란 이름으로 정의
//
//    stlList.push_back(100);
//    stlList.pop_back();
//    stlList.push_front(20);
//    stlList.pop_front();
//    cout << stlList.size() << endl;//사이즈 체크 
//    cout << stlList.empty() << endl;//비었는지 안비었는지 확인 요소가 없으면 1, 있으면 0 반환
//    //리스트는 capacity가 없음 구조를 생각하면 왜 없는지 알듯
//    stlList.clear();//목록의 모든요소 지우기
//    cout << stlList.size() << endl;//사이즈
//    cout << stlList.empty();//요소가 텅 비었으면 1을 반환
//
//
//
//
//    cout << endl << endl << endl << endl << endl;
//
//    CMyList<int> NaList;//내가 만든 CMyList를 인트형으로 myList란 이름으로 정의
//    NaList.push_back(10);//TODO:아래 팝백이 문제가 아니라 푸쉬백 함수에 문제 있음
//    NaList.push_back(20);
//    NaList.push_back(30);
//    NaList.push_front(30);
//    NaList.push_front(70);
//    NaList.push_front(20);
//    cout << NaList.size() << endl;//myList의 사이즈지롱
//    cout << NaList.empty() << endl;//myList가 텅비었다! 그럼 1을 준다 아니다! 그럼 부자니까 0을 준다
//
//    cout << NaList.size() << endl;
//
//    NaList.pop_back();
//    cout << NaList.size() << endl;
//    NaList.pop_front();
//    cout << NaList.size() << endl;
//
//
//
//
//
//
//
//    return 0;
//}