// QueueTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>
#include <queue>
#include <deque>

using namespace std;

//deque 사용 예제
int main()
{
	deque<int> d{ 10, 20, 30, 40 };

	d.push_front(50);
	d.push_back(60);	//50 10 20 30 40 60

	for (auto e : d)
	{
		cout << e << ", ";
	}
	cout << endl;
}


////(환형) 큐 자료구조 구현 - 배열 이용
//template <typename T>
//class CircularQueue
//{
//private:
//	T* arr;				//데이터는 배열로 저장
//	int front_idx;		//맨 앞 데이터 인덱스
//	int rear_idx;		//맨 뒤 데이터 인덱스
//	int count;			//데이터 개수
//	int capacity;		//데이터 용량 크기
//public:
//	//생성자
//	CircularQueue(int sz)
//	{
//		arr = new T[sz];
//		capacity = sz;
//		count = 0;
//		front_idx = 0;
//		rear_idx = -1;
//	}
//
//	//소멸자
//	~CircularQueue()
//	{
//		delete[] arr;
//	}
//
//	//맨 뒤의 위치에 데이터 넣기
//	void enqueue(const T& e)
//	{
//		//데이터 풀 체크
//		if (full())
//		{
//			cout << "Overflow error!" << endl;
//			return;
//		}
//
//		rear_idx = (rear_idx + 1) % capacity;
//		arr[rear_idx] = e;
//		count++;
//	}
//
//	//맨 앞의 위치에 있는 데이터 꺼내기
//	void dequeue()
//	{
//		//데이터 empty 체크
//		if (empty())
//		{
//			cout << "Underflow Error!" << endl;
//			return;
//		}
//
//		front_idx = (front_idx + 1) % capacity;
//		count--;
//	}
//
//	//맨 앞의 위치에 있는 데이터 읽기
//	const T& front() const { return arr[front_idx]; }
//
//	//데이터 empty 체크
//	bool empty() const { return count == 0; }
//
//	//데이터 크기
//	int size() const { return count; }
//
//	//데이터 풀 체크
//	bool full() const { return count == capacity; }
//};
//
////환형 큐 예제
//int main()
//{
//	CircularQueue<int> q(5);
//
//	q.enqueue(10);
//	q.enqueue(20);
//	q.enqueue(30);
//	q.enqueue(40);
//	q.enqueue(50);	//10 20 30 40 50
//
//	q.dequeue();
//	q.dequeue();	//30 40 50
//	
//	q.enqueue(60);
//	q.enqueue(70);	// 30 40 50 60 70
//
//	q.enqueue(80);	//오버플로우 에러 발생
//
//	while (!q.empty())
//	{
//		auto& e = q.front();
//		cout << e << ", ";
//
//		q.dequeue();
//	}
//	cout << endl;
//
//}

//큐 자료구조 구현 - list 이용
//template <typename T>
//class Queue
//{
//private:
//	list<T> lst;
//
//public:
//	//생성자
//	Queue() {}
//
//	//맨 뒤의 위치에 데이터 넣기
//	void enqueue(const T& e)
//	{
//		lst.push_back(e);
//	}
//
//	//맨 앞의 위치에 있는 데이터 꺼내기
//	void dequeue()
//	{
//		lst.pop_front();
//	}
//
//	//맨 앞의 위치에 있는 데이터 읽기
//	const T& front() const
//	{
//		return lst.front();
//	}
//
//	bool empty() const { return lst.empty(); }
//	int size() const { return lst.size(); }
//};

//int main()
//{
//	//Queue<int> q;
//	//q.enqueue(10);
//	//q.enqueue(20);
//	//q.enqueue(30);	// 10, 20, 30
//	//q.dequeue();	// 20, 30
//	//
//	//cout << q.front() << endl;	//20
//
//	//q.enqueue(40);
//
//	//while (!q.empty())
//	//{
//	//	auto& e = q.front();
//	//	cout << e << ", ";
//
//	//	q.dequeue();
//	//}
//	//cout << endl;
//
//	queue<int> q;
//	q.push(10);
//	q.push(20);
//	q.push(30);	// 10, 20, 30
//	q.pop();	// 20, 30
//
//	cout << q.front() << endl;	//20
//
//	q.push(40);
//
//	while (!q.empty())
//	{
//		auto& e = q.front();
//		cout << e << ", ";
//
//		q.pop();
//	}
//	cout << endl;
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
