// StackTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

//Vector 클래스를 이용하여 stack 자료구조 구현
//vector로 저장된 데이터를 후입선출 기능 구현
template <typename T>
class Stack
{
private:
    vector<T> v;

public:
    //생성자
    Stack() {}

    //데이터 넣기
    void push(const T& e)
    {
        v.push_back(e);
    }

    //데이터 꺼내기 : 후입선출
    void pop()
    {
        v.pop_back();
    }

    //맨 마지막에 넣은 데이터 읽기
    const T& top() const
    {
        return v.back();
    }

    //데이터 유무 체크
    bool empty() const
    {
        return v.empty();
    }

    //데이터 사이즈
    int size() const
    {
        return v.size();
    }
};
int main()
{
    //Stack<int> stk; //커스텀 Stack 클래스
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);   //10 20 30
    stk.pop();      //10 20

    cout << stk.top() << endl;  //20
    stk.push(40);

    //스택에 있는 모든 내용 출력하기
    while (!stk.empty())
    {
        //맨 위에 있는 데이터 읽어서 출력
        auto a = stk.top();
        cout << a << ", ";
        //맨 위에 있는 데이터 꺼내기
        stk.pop();
    }
    cout << endl;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
