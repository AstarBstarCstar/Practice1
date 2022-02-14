#pragma once
#include <assert.h>
//Node 리스트의 기본단위

template <typename T>
struct Node
{
    T        m_data;//노드안에 엠 데이터가 들어있다
    Node*    pNext;//넥스트를 노드 구조체의 포인터 변수로 선언  4바이트
    Node*    pPrev;//프리브를 노드 구조체의 포인터 변수로 선언  4바이트 

    Node()
    {
        pPrev = nullptr;//프리브는 우선 널값
        pNext = nullptr;//피넥스트도 우선 널값
    }
    Node(T _m_data, Node* _pNext, Node* _pPrev)//오버로딩 생성자 재정의
    {
        m_data = _m_data;//디스>>는 그 클래스나 구조체의 변수를 말함
        pPrev = _pPrev;
        pNext = _pNext;
    }

    ~Node()
    {}
};


template <typename T>
class CMyList
{
    Node<T>*     pHeadNode;
    Node<T>*     pTailNode;
    int          m_size;//엠자탈모

public:
    CMyList();//생성자 정의
    ~CMyList();//소멸자 정의

    void push_back(const T& data);
    void pop_back();
    void push_front(const T& data);
    void pop_front();
    int size();
    bool empty();
    void clear();//나머지 함수들 정의
    void at();//TODO:아직 미구현 
};

template<typename T>
CMyList<T>::CMyList()//무야호 나는 생성자야 기본정의를 하지
{
    pHeadNode = nullptr;
    pTailNode = nullptr;
    m_size = 0;
}


template<typename T>
CMyList<T>::~CMyList()
{
    clear();//무지성으로 그냥 소멸자에 만든 클리어 함수 박음;
}


template<typename T>
void CMyList<T>::push_back(const T& data)//뒤에 하나씩 넣는다 
{
    //if (m_size > 0)
    //{
    //    
    //    Node<T>* newNode = new Node<T>(data, nullptr, nullptr);
    //    
    //    pTailNode->pPrev = newNode;
    //    pTailNode = newNode;
    //}

    //else
    //{
    //    Node<T>* newNode = new Node<T>(data, nullptr, nullptr); 
    //    pTailNode = newNode;
    //     //    pHeadNode = newNode;
    //}
    //m_size++;
     
    if (m_size > 0)
    {
        /*처음 들어가는 예외의 경우 처리 해줄것 지금하는중 if else로*/
        Node<T>* newNode = new Node<T>(data, pTailNode , nullptr);
        newNode->pPrev = pTailNode;
        pTailNode->pNext = newNode;
        pTailNode = newNode;
        m_size++;
    }
    else
    {
        Node<T>* newNode = new Node<T>(data, nullptr, nullptr);
        pHeadNode = newNode;
        pTailNode = newNode;
        m_size++;
    }
}

template<typename T>
void CMyList<T>::push_front(const T& data)//만들고 앞으로 묶는다 ex)12345 에서 new 넣으면  new12345 됨
{
    if (m_size > 0)
    {
       /* 처음 들어가는 예외의 경우 처리 해줄것 지금하는중 if else로*/
        Node<T>* newNode = new Node<T>(data, pHeadNode, nullptr);

        pHeadNode->pPrev = newNode;
        pHeadNode = newNode;
        m_size++;
    }

    else
    {
        Node<T>* newNode = new Node<T>(data, nullptr, nullptr);

        pHeadNode = newNode;
        pTailNode = newNode;
        m_size++;
    }
}

template<typename T>
void CMyList<T>::pop_back()//나는 뒤에있는 요소를 하나 제거 한다해
{
    assert(m_size != 0);//무야호 m_size가 0보다 작은데 또 줄일 생각을 한다면 네1놈을 죽이겠다

    if (1 == m_size)
    {

        Node<T>* pDeleteNode = pTailNode;
        pTailNode = nullptr;
        pHeadNode = nullptr;
        delete pDeleteNode;
    }
    else
    {
        Node<T>* pDeleteNode = pTailNode;
        pTailNode = pTailNode->pPrev;
        pTailNode->pNext = nullptr;//TODO: 자꾸 여기서 오류가 나는데 이유를 모르겠습니다. 분석 해 보니 이 함수가 아니라, push_back 함수에서 오류가 나는 것 같습니다.
        delete pDeleteNode;
    }

    m_size--;
}

template<typename T>
void CMyList<T>::pop_front()//나는 앞에있는 요소를 하나 제거한다해
{
    assert(m_size != 0);//무야호 m_size가 0보다 작은데 또 줄일 생각을 한다면 네1놈을 죽이겠다
    if (1 == m_size)
    {
        Node<T>* pDeleteNode = pHeadNode;//우선 피헤드 노드를 딜리트 노드에 준다
        pTailNode = nullptr;//사이즈가 하나밖에 없으니피테일은 널값
        pHeadNode = nullptr;//사이즈가 하나밖에 없으니피헤드도 널값
        delete pDeleteNode;//원래놈 죽1이기
    }
    else
    {
        Node<T>* pDeleteNode = pHeadNode;//피헤드 >>딜노드 할당
        pHeadNode = pHeadNode->pNext;//피헤드의 피넥을 피헤드에 할당
        pHeadNode->pPrev = nullptr;//앞에는 이제 없으니 널값할당
        delete pDeleteNode;//딜노드 삭제
    }

    m_size--;//엠자탈모--
}

template<typename T>
int CMyList<T>::size()//사이즈를 뱉어낸다 그러나 캐패시티는 없다 이유는 리스트의 구조를 생각하면 알듯
{
    return m_size;
}

template<typename T>
bool CMyList<T>::empty()//사이즈가 없다 그러면 1을 뱉어낸다 아니면 0을 뱉는다
{
    if (size() == 0)   return true;
    else            return false;
}

template<typename T>
void CMyList<T>::clear()//안녕 나는 목록의 모든 요소를 조진다
{
    int Num = m_size;//엠사이즈를 넘에 할당하고 그만큼 팝백을 실행
    for (int i = 0; i < Num; i++)
    {
        pop_back();
    }
}

template<typename T>
void CMyList<T>::at()
{
}

//리스트 안의 모든 노드들의 데이터를 출력하는 함수 구현하기
//리스트 안의 n번째 노드의 데이터를 반환하는 []연산자 재정의
//복사생성자 구현
//리스트 끝과 다른 리스트의 처음을 연결한 리스트를 반환하는 + 연산자 재정의
//리스트 끝에 다른 리스트의 처음을 연결하는 += 연산자 재정의

