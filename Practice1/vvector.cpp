//#include<iostream>
//#include"vvector.h"
//using namespace std;
//
//template <typename T>
//void print_VectorData(CMyVector<T> vec)
//{
//
//	for (int i = 0; i < vec.size(); i++)
//	{
//		cout << "벡터에 들어있는 데이터: ";
//		cout << vec[i] << endl;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	CMyVector<int>NaVector;//인트형으로 나벡터 동적배열 선언
//	NaVector.push_back(10);
//	NaVector.push_back(20);
//	NaVector.push_back(30);
//	NaVector.push_back(40);
//	NaVector.push_back(50);
//	NaVector.push_back(10);
//	NaVector.push_back(20);
//
//
//	cout << "벡터의 사이즈:" << NaVector.size() << endl;
//	cout << "벡터의 캐패시티:" << NaVector.capacity() << endl;
//	print_VectorData(NaVector);
//	NaVector.pop_back();
//	NaVector.pop_back();
//	NaVector.pop_back();
//	NaVector.pop_back();
//
//
//	cout << "벡터의 사이즈:" << NaVector.size() << endl;
//	cout << "벡터의 캐패시티:" << NaVector.capacity() << endl;
//	print_VectorData(NaVector);
//
//	return 0;
//}