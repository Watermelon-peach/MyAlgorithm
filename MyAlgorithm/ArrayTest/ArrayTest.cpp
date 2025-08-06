// ArrayTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

//학생 5명의 점수 평균을 구하라
int main()
{
	int scores[5] = { 50, 60, 70, 80, 90 };

	//배열 길이 얻어오기
	int length = size(scores);

	//합계 구하기
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += scores[i];
	}

	//평균 구하기
	float avg = (float)sum / length;

	//콘솔출력
	cout << "Mean Score: "<< avg << endl;
}

//int main()
//{
//    std::cout << "Hello Array!\n";
//}