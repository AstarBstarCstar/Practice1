//#pragma once
//#include<assert.h>    // 어썰트 h 함수 사용
//#define VEC_SIZE    30//VEC_SIZE는 30으로 정의함.
//template <typename T>
//class CMyVector
//{
//private:
//    T*           pData;  //벡터 데이터를 담을 주소값
//    unsigned int m_size;//벡터 배열에 들어있는 요소 갯수
//    unsigned int m_capacity;//벡터 배열 자체 사이즈
//
//public:
//     CMyVector();//생성자
//     ~CMyVector();//소멸자
//
//    //벡터에 사용할 함수 정의   
//    void push_back(const T& data);//맨뒤부터 넣는다
//    void pop_back();            //맨뒤부터 지운다
//    void resizing(unsigned int resize);//배열 저장소 크기 리사이즈 함수
//    unsigned int size();        //배열요소갯수 확인
//    unsigned int capacity();    //배열자체 사이즈 확인
//
//    T& operator[](unsigned int index);//인덱스 연산자 재정의
//    T& at(long long int index);
//
//    class iterator
//    {
//        friend CMyVector // cmyvector 에게 나의 모든것의 접근 허용 해주겠다.  근까 ㅁ음 친구에게 모든걸 다 주는 느낌
//
//    private :z
//        CMyVector* pVector;//벡터의 내용
//        T*         witch;//배열의 위치(??)
//        int        m_index;
//        //1.자료구조의 데이터를 가르킴
//        //2.자료구조의 데이터를 가르키는데 ++ -- 를 통해 이전, 이후의 다른 데이터를 가르킬수있다
//        //3.같은 자료를 가르키는 이터레이터는 같은 이터레이터 (?????)
//        //4.이터레이터가 가르키고 있는 데이터는 *역참조로 갖고올수 있다 가르키니깐
//
//    public:
//        T& operator*(); //데이터 가져오는 역참조 연산( 포인터로 가져오기)
//
//        iterator& operator++();//플플 전치연산
//        iterator operator++(int);//플플 후치연산
//
//        iterator& operator--();//마마 전치연산
//        iterator operator--(int);//마마 후치연산
//
//        bool operator == (const iterator& _other);//== 연산 같다 1 틀리다 0
//        bool operator != (const iterator& _other);//!= 연산
//    };
//};
//
//template<typename T>
//CMyVector<T>::CMyVector()
//{
//    pData = new T[10];
//    m_size = 0;
//    m_capacity = 10;
//}
//
//
//
//template<typename T>
//void CMyVector<T>::push_back(const T& data)
//{
//    if (m_size >= m_capacity)
//    {
//        T* newData = new T[m_capacity * 2];
//        for (int i = 0; i < m_size; ++i)
//        {
//            newData[i] = pData[i];
//        }
//        delete[] pData;
//        pData = newData;
//        m_capacity *= 2;
//    }
//
//    pData[m_size] = data;
//    m_size += 1;
//}
//
//template<typename T>
//void CMyVector<T>::pop_back()
//{
//
//    if (m_size == 0)       return;//0보다 작은데 더 쭐일려 하면 그냥 함수종료
//    if (m_size < m_capacity/3)//빈공간이 오지게 많아진다면(캐패시티/3 > 사이즈라면)
//    {
//        resizing(m_capacity/2);//캐패시티 사이즈를 반토막냄
//    }
//    m_size -= 1;
//}
//
//template<typename T>
//void CMyVector<T>::resizing(unsigned int resize)
//{
//    if (m_size > resize)
//    {
//        resize = m_size;
//    }
//
//    T* Arr = new T[resize];
//
//    for (unsigned int i = 0; i < m_size; i++)
//    {
//        Arr[i] = pData[i];
//    }
//    delete[] pData;//->지울꺼다[](배열을)를 어떤 []? pData
//    pData = Arr;
//}
//
//template<typename T>
//unsigned int CMyVector<T>::size()
//{
//    return m_size;
//}
//
//template<typename T>
//unsigned int CMyVector<T>::capacity()
//{
//    return m_capacity;
//}
//
//template<typename T>
//T& CMyVector<T>::at(long long int index)
//{
//    if (m_size < index);  //m_size보다 더 큰 인덱스를 가리킨다면 어썰트 호출로 강제종료
//    return pData[index];//A.at(1)은  A[1]과 같기에 이것밖에 생각이 안납니다
//}
//
//template<typename T>
//T& CMyVector<T>::operator[](unsigned int index)
//{
//    assert(index >=! m_size);
//
//    return pData[index];
//}
//
//template<typename T>
//T& CMyVector<T>::iterator::operator*()
//{
//    if (pVector->pDataArray != pData || pVector->m_size <= m_index || m_index == -1)//todo:
//        assert(nullptr);
//
//    return pData[m_index];
//}
//
//template<typename T>
//typename CMyVector<T> iterator& CMyVector<T>::iterator::operator++()
//{
//    if (pVector -> pDAtaArray != pData|| -1 = m_index)
//
//        if (pVector->size()-1 ==m_index)//마지막데이터를 가리키고 있을때
//
//        else
//        {
//            m_index++;
//        }
//    return *this;
//}
//
//template<typename T>
//typename CMyVector<T>::iterator& CMyVector<T>::iterator::operator--()
//{
//    //1.이터레이터가 벡터의 데이터 변경(데이터 사이즈 재정의 등) 으로 잘못된 곳을 가르킬 시?
//    if (pVector->pDataArray != pData)
//        assert(nullptr);
//
//    //2.이터레이터가 이미 비긴 인데 또 쭐일려 하면 파괴한다
//    if (0 == m_index)
//        assert(nullptr)
//
//    //3. 이터레이터가 엔드 이터레이터면 이벡터의 가장 끝 데이터를 가리키셈
//    if (-1 == m_index)
//    {
//        m_index = pVector->size - 1;
//    }
//    else
//    {
//        m_index--;
//    }
//
//    m_index--;
//    return *this;//<<자기를 가르키는 것이 디스 이니 역참조 디스는 자기의 원본을 리턴해주는것
//}
//
//template<typename T>
//inline iterator CMyVector<T>::iterator::operator--(int)
//{
//    iterator tempiter(*this);
//    --(*this);
//    return tempiter;
//}
//
//template<typename T>
//bool CMyVector<T>::iterator::operator==(const iterator& _other)
//{
//    if (this->pData == _other.pData &&
//        this->pVector == _other.pVector &&
//        this->m_index == _other.m_index)
//        return true;
//
//    return false;
//}
//
//template<typename T>
//bool CMyVector<T>::iterator::operator!=(const iterator& _other)
//{
//    return !(*this == _other);
//}
//
//
//template<typename T>
//typename CMyVector<T>::iterator CMyVector<T>::begin()
//{
//    //자료가 없을땐 둘다 엔드 비긴 둘다 같은곳 가리킴.
//    iterator newiter;
//    newiter.pVector - this;
//    newiter.pData - this->pDataAttay;
//    newiter.m_index = 0 == m_size ? -1 : 0;
//    return newiter;
//}
//
//typename CMyVector<T>::iterator CMyVector<T>::end()
//{
//    iterator newiter;
//    newiter.pVector = this;
//    newiter.pData = this->pDataArray;
//    newiter.m_index = -1;
//    return newiter;
//}
//
//void CMyVector<T>::erase(const iterator& iter)
//{
// //예외처리:이터가 이상한곳 가리킬때( ex 변덕)
////이터가 데이터 없는데 지우려고 할때   (ex end를 지운다던지)
//    if (iter.pVector != this || iter.m_index >= m_size || -1 == m_size)
//        assert(nullptr);
//
//    int index = iter.m_index;
//    for (int i = index; i < m_size - 1; i++)
//    {
//        pDataArray[i] = pDataArray[i + 1];
//    }
//    m_size--;
//}