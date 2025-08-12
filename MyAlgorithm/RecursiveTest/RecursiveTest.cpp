// RecursiveTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <numeric>
#include <vector>

using namespace std;

//매개변수 받은 vector 출력
template <typename T>
void print_vector(const vector<T>& vec)
{
	for (const auto& e : vec)
	{
		cout << e << ", ";
	}
	cout << endl;
}

//vector 순열해서 출력하기, k: vector 인덱스로 순열을 시작하는 위치
void permutation(vector<int>& vec, int k)
{
	//기저 조건
	if (k == vec.size() - 1)
	{
		print_vector(vec);
		return;
	}

	//재귀호출부
	for (int i = 0; i < vec.size(); i++)
	{
		swap(vec[k], vec[i]);
		permutation(vec, k + 1);
		swap(vec[k], vec[i]);
	}
}

int main()
{
	vector<int> vec{ 1, 2, 3, 4 };
	permutation(vec, 0);
}

////최대 공약수 구하기
//int gcd(int a, int b)
//{
//	//기저 조건
//	if (b == 0)
//		return a;
//
//	//재귀 호출부
//	return gcd(b, a % b);
//}
//
////최소 공배수 구하기
//int lcm(int a, int b)
//{
//	return a * b / gcd(a, b);
//}
//
//int main()
//{
//	cout << gcd(18, 24) << endl;
//	cout << lcm(24, 18) << endl;
//
//	//cout << std::gcd(18, 24) << endl;
//	//cout << std::lcm(24, 18) << endl;
//
//
//}


////매개변수로 받은 문자열을 뒤집어 반환
//string reverse(const string& str)
//{
//	//기저 조건
//	if (str.length() == 0)
//		return "";
//
//	//재귀호출부
//	return reverse(str.substr(1)) + str[0];
//}
//
//int main()
//{
//	string str = "HELLO";
//	cout << reverse(str) << endl;
//}

////피보나치 수열 구하기
//long long fibo(int n)
//{
//	//기저 조건
//	if (n <= 1)
//		return 1;
//
//	//재귀호출부
//	return fibo(n - 1) + fibo(n - 2);
//}
//
//int main()
//{
//	//1부터 10까지 피보나치 값 나열
//	/*for (int i = 1; i <= 10; i++)
//	{
//		cout << fibo(i) << ", ";
//	}*/
//	
//	cout << fibo(48) << endl;
//}

////n! 구하기
//long long factorial(int n)
//{
//	//기저 조건
//	if (n <= 0)
//		return 1;
//
//	//재귀 호출부
//	return n * factorial(n - 1);
//}
//
//int main()
//{
//	cout << factorial(5) << endl;
//	cout << factorial(10) << endl;
//	cout << factorial(20) << endl;
//}

////1부터 n까지의 합을 구하라 - 반복문 이용
//int sum_iterative(int n)
//{
//    int sum = 0;
//
//	for (int i = 1; i < n; i++)
//	{
//		sum += i;
//	}
//	
//	return sum;
//}
//
////1부터 n까지의 합을 구하라 - 재귀호출 이용
//int sum_recursive(int n)
//{
//	//기저 조건
//	if (n < 1)
//		return 0;
//	else if (n == 1)
//		return 1;
//
//	//재귀 호출부
//	return n + sum_recursive(n - 1);
//
//}
//
//int main()
//{
//	cout << sum_iterative(100) << endl;
//	cout << sum_recursive(100) << endl;
//}

//int main()
//{
//    std::cout << "Hello Recursive!\n";
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
