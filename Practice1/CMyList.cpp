//#include "CMyList.h"
//#include <iostream>
//#include <list>
//using namespace std;
//
//
//int main()
//{
//    list<int> stlList;//stl���� list�� ��Ʈ������ stlList�� �̸����� ����
//
//    stlList.push_back(100);
//    stlList.pop_back();
//    stlList.push_front(20);
//    stlList.pop_front();
//    cout << stlList.size() << endl;//������ üũ 
//    cout << stlList.empty() << endl;//������� �Ⱥ������ Ȯ�� ��Ұ� ������ 1, ������ 0 ��ȯ
//    //����Ʈ�� capacity�� ���� ������ �����ϸ� �� ������ �˵�
//    stlList.clear();//����� ����� �����
//    cout << stlList.size() << endl;//������
//    cout << stlList.empty();//��Ұ� �� ������� 1�� ��ȯ
//
//
//
//
//    cout << endl << endl << endl << endl << endl;
//
//    CMyList<int> NaList;//���� ���� CMyList�� ��Ʈ������ myList�� �̸����� ����
//    NaList.push_back(10);//TODO:�Ʒ� �˹��� ������ �ƴ϶� Ǫ���� �Լ��� ���� ����
//    NaList.push_back(20);
//    NaList.push_back(30);
//    NaList.push_front(30);
//    NaList.push_front(70);
//    NaList.push_front(20);
//    cout << NaList.size() << endl;//myList�� ����������
//    cout << NaList.empty() << endl;//myList�� �ֺ����! �׷� 1�� �ش� �ƴϴ�! �׷� ���ڴϱ� 0�� �ش�
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