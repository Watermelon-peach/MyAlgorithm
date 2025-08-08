// ListTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

//std forward_list 클래스 활용
int main()
{
	forward_list<int> l1{ 10, 20, 30, 40 };
	l1.push_front(40);
	l1.push_front(30);

	for (auto a : l1)
	{
		cout << a << ", ";
	}
	cout << endl;

	int cnt = distance(l1.begin(), l1.end());
	cout << cnt << endl;

	l1.remove_if([](int n) {return n > 20; });

	for (auto a : l1)
	{
		cout << a << ", ";
	}
	cout << endl;
}

////std list 클래스 활용
//int main()
//{
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//
//	list<int> l2{ 10, 20, 30, 40 };
//	for (auto a : l2) //foreach, auto -> var
//	{
//		cout << a << ", ";
//	}
//	cout << endl;
//
//	l2.splice(l2.end(), l1); //다른 리스트를 가져다 연결 10 20 30 40 10 20
//	for (auto a : l2) //foreach, auto -> var
//	{
//		cout << a << ", ";
//	}
//	cout << endl;
//
//	l2.sort();	//10 10 20 20 30 40
//
//	l2.unique();
//	for (auto a : l2) //foreach, auto -> var
//	{
//		cout << a << ", ";
//	}
//	cout << endl;
//
//
//}

////int data를 가진 node list(양방향) 구현
//struct Node
//{
//	int data;
//	Node* prev;		//현재 노드의 이전 노드
//	Node* next;		//현재 노드의 다음 노드
//};
//
//class DoubleLinkedList
//{
//private:
//	int count;		//노드의 개수
//	Node* header;
//	Node* trailer;
//
//public:
//	//생성자
//	DoubleLinkedList()
//	{
//		count = 0;
//		header = new Node{ 0, NULL, NULL };
//		trailer = new Node{ 0, NULL, NULL };
//		header->next = trailer;
//		trailer->prev = header;
//	}
//
//	//소멸자
//	~DoubleLinkedList()
//	{
//		while (!empty())
//		{
//			pop_front();
//		}
//		delete header;
//		delete trailer;
//	}
//
//	//지정하는 노드(p)의 앞에 value값을 가진 노드 삽입하기
//	void insert(Node* p, int value)
//	{
//		//value값을 가진 노드 생성
//		Node* new_node = new Node{ value, p->prev, p };
//		new_node->prev->next = new_node;
//		new_node->next->prev = new_node;
//		count++;
//	}
//
//	//리스트의 맨 앞에 value값을 가진 노드 삽입하기
//	void push_front(int value)
//	{
//		insert(header->next, value);
//	}
//
//	//리스트의 맨 뒤에 value값을 가진 노드 삽입하기
//	void push_back(int value)
//	{
//		insert(trailer, value);
//	}
//
//	//특(지)정하는 노드(p)의 삭제
//	void erase(Node* p)
//	{
//		p->prev->next = p->next;
//		p->next->prev = p->prev;
//		delete p;
//		count--;
//	}
//
//	//맨 앞에 있는 노드 삭제
//	void pop_front()
//	{
//		if (!empty())
//			erase(header->next);
//	}
//	//맨 뒤에 있는 노드 삭제
//	void pop_back()
//	{
//		if (!empty())
//			erase(trailer->prev);
//	}
//
//	//데이터가 있는지 체크
//	bool empty()
//	{
//		return count == 0;
//	}
//
//	//노드의 개수
//	int size()
//	{
//		return count;
//	}
//
//	//정방향으로 순회하며 노드에 있는 데이터 출력
//	void print_all()
//	{
//		Node* curr = header->next;
//		while (curr != trailer)
//		{
//			//데이터 출력
//			cout << curr->data << ", ";
//			//순회
//			curr = curr->next;
//		}
//		cout << endl;
//	}
//
//	//역방햐으로 순회하며 노드에 있는 데이터 출력
//	void print_reverse()
//	{
//		Node* curr = trailer->prev;
//
//		while (curr != header)
//		{
//			//데이터 출력
//			cout << curr->data << ", ";
//			//역방향 순회
//			curr = curr->prev;
//		}
//		cout << endl;
//	}
//};
//
//int main()
//{
//	DoubleLinkedList dlList;
//	dlList.push_back(10);	//10
//	dlList.push_back(20);	//10 20
//	dlList.push_back(30);	//10 20 30
//	dlList.print_all();
//	dlList.print_reverse();
//
//	dlList.pop_front();		//10 제거
//	dlList.pop_back();		//30 제거
//	dlList.print_all();		//20
//
//	dlList.push_front(100);	//20앞에 100 삽입
//	dlList.push_back(300);	//20뒤에 300 삽입
//	dlList.print_all();		//100 20 300
//}

////int data를 가진 node list 구현
//struct Node
//{
//	int data;
//	Node* next;
//};
//
//class LinkedList
//{
//private:
//	Node* head;
//
//public:
//	//생성자
//	LinkedList() : head(NULL) {};
//
//	//소멸자
//	~LinkedList()
//	{
//		//현재 가진 모든 노드 삭제
//		while (!empty())
//		{
//			pop_front();
//		}
//	}
//
//	//리스트 맨 앞에 있는 데이터(value) 삽입하기
//	void push_front(int value)
//	{
//		//삽입할 노드 생성 (data:value, next:NULL 초기화)
//		Node* new_node = new Node{ value, NULL };
//
//		if (head != NULL)
//		{
//			new_node->next = head;
//		}
//
//		head = new_node;
//	}
//
//	//리스트 맨 앞에 있는 데이터 삭제
//	void pop_front()
//	{
//		//데이터 없으면
//		if (head == NULL)
//		{
//			return;
//		}
//
//		Node* first = head;
//		head = first->next;
//		delete first;
//	}
//
//	//리스트의 모든 노드 데이터 출력하기
//	void print_all()
//	{
//		Node* curr = head;
//		
//		//반복문
//		while (curr != NULL)
//		{
//			cout << curr->data << ", ";
//			//노드 자신의 next로 다음 노드의 주소를 가져온다
//			curr = curr->next;
//		}
//		cout << endl;
//	}
//
//	//데이터 유무 체크
//	bool empty()
//	{
//		return head == NULL;
//	}
//};
//
////LinkedList 리스트
//int main()
//{
//	LinkedList ll;
//	ll.push_front(10);	//10
//	ll.push_front(20);	//20 10
//	ll.push_front(30);	//30 20 10
//	ll.print_all();
//
//	ll.pop_front();		//30 삭제
//	ll.print_all();		//20 10
//
//	ll.push_front(40);
//	ll.print_all();		//40 20 10
//
//	for (int i = 0; i < 10; i++)
//	{
//		ll.push_front(i);
//		ll.print_all();
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		ll.pop_front();
//		ll.print_all();
//	}
//
//}

//int main()
//{
//    std::cout << "Hello World!\n";
//}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
