// ArrayTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <array>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	cin >> A;
	cin >> B;

	cout << A + B;
}
////가변형 배열(vector) 2차원 배열 사용 예제
//int main()
//{
//	//2행 3열로 생성하고 0으로 초기화
//	vector<vector<int>> mat1(2, vector<int>(3, 0));
//
//	//2행 3열로 생성하고 초기값 설정
//	vector<vector<int>> mat2{
//		{1, 2, 3},
//		{4, 5, 6}
//	};
//
//	//출력
//	for (int r = 0; r < mat2.size(); r++)
//	{
//		for (int c = 0; c < mat2[r].size(); c++)
//		{
//			cout << mat2[r][c] << " ";
//		}
//		cout << endl;
//	}
//
//}

////가변형 배열(vector) 사용 예제
//int main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//
//	vector<int> v2(10);		//0으로 초기화된 10개의 방 생성
//	vector<int> v3(10, 1);	//1로 초기화된 10개의 방 생성
//	vector<int> v4{ 10, 20, 30, 40, 50 };
//	
//	vector<int> v5(v4);
//	vector<int> v6(v4.begin(), v4.begin() + 3);
//
//	for (int i = 0; i < v6.size(); i++)
//	{
//		cout << v6[i] << endl;
//	}
//}

////할당된 메모리가 자동으로 해제되는 템플릿<T> 클래스
//// [], 크기
//template<typename T>
//class DynamicArray
//{
//private:
//	unsigned int sz;			//배열의 크기
//	T* arr;						//배열<T> 포인터
//
//public:
//	//생성자 - 동적 메모리 할당, 배열의 크기 결정
//	DynamicArray(int n) : sz(n)
//	{
//		arr = new T[sz] {};
//	}
//
//	//소멸자 - 할당된 동적 메모리를 해제
//	~DynamicArray()
//	{
//		delete[] arr;
//		cout << "동적 메모리 해제" << endl;
//	}
//
//	//배열 크기
//	unsigned int size()
//	{
//		return sz;
//	}
//
//	//[]
//	T& operator[] (const int i) { return arr[i]; }
//};
//
//int main()
//{
//	DynamicArray<int> da(5);
//	da[0] = 10;
//	da[1] = 20;
//	da[2] = 30;
//
//	for (int i = 0; i < da.size(); i++)
//	{
//		cout << da[i] << endl;
//	}
//}

////동적 메모리 할당 - 해제
//int main()
//{
//	//동적 메모리 할당
//	int* ptr = new int[3] {};
//	ptr[0] = 10;
//	ptr[1] = 20;
//
//	//사용
//	for (int i = 0; i < 3; i++)
//	{
//		cout << ptr[i] << endl;
//	}
//
//	//할당된 동적 메모리 해제
//	delete[] ptr;
//	ptr = nullptr;
//
//} 

////학생 5명의 점수들의 평균을 구하라 - C++ 언어 array 구현
//int main()
//{
//	array<int, 5> scores = { 50, 60, 70, 80, 90 };
//
//	//합계 구하기
//	int sum = 0;
//	for (int i = 0; i < scores.size(); i++)
//	{
//		sum += scores[i];
//	}
//
//	//평균 구하기
//	float avg = (float)sum / scores.size();
//
//	//출력
//	cout << "Mean Score: " << avg << endl;
//}

////2차원 배열 - C 언어 배열
//int main()
//{
//	int mat[2][3] = {
//		{1, 2, 3},
//		{4, 5, 6}
//	};
//
//	//2차원 배열 출력하고 합 구하기
//	int sum = 0;
//	for (int r = 0; r < 2; r++)
//	{
//		for (int c = 0; c < 3; c++)
//		{
//			cout << mat[r][c] << " ";
//
//			sum += mat[r][c];
//		}
//		cout << endl;
//	}
//	cout << "Total: " << sum << endl;
//}

////학생 5명의 점수 평균을 구하라
//int main()
//{
//	int scores[5] = { 50, 60, 70, 80, 90 };
//
//	//배열 길이 얻어오기
//	int length = size(scores);
//
//	//합계 구하기
//	int sum = 0;
//	for (int i = 0; i < length; i++)
//	{
//		sum += scores[i];
//	}
//
//	//평균 구하기
//	float avg = (float)sum / length;
//
//	//콘솔출력
//	cout << "Mean Score: "<< avg << endl;
//}

//int main()
//{
//    std::cout << "Hello Array!\n";
//}