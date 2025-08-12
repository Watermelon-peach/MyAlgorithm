// SortTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>

using namespace std;

//병합시 병합내용을 담을 임시 변수
int buff[256];

//병합 
void merge(int data[], int left, int mid, int right)
{
	int i = left, j = mid + 1, k = left;

	while (i <= mid && j <= right)
	{
		if (data[i] <= data[j])
		{
			buff[k++] = data[i++];
		}
		else
		{
			buff[k++] = data[j++];
		}
	}

	while (i <= mid)
	{
		buff[k++] = data[i++];
	}

	while (j <= right)
	{
		buff[k++] = data[j++];
	}

	//정렬된 임시 저장 데이터를 data에 다시 저장
	for (int x = left; x <= right; x++)
	{
		data[x] = buff[x];
	}
}

//병합 정렬
void merge_sort(int data[], int left, int right)
{
	//기저 조건
	if (left >= right)
		return;

	//재귀 호출
	int mid = (left + right) / 2;
	merge_sort(data, left, mid);
	merge_sort(data, mid + 1, right);
	merge(data, left, mid, right);
}


int main()
{
	int data[] = { 2, 6, 7, 4, 1, 8, 5 ,3 };
	merge_sort(data, 0, 7);

	for (auto n : data)
	{
		cout << n << ", ";
	}
	cout << endl;
}


////버블 정렬
//void bubble_sort(int data[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = n - 1; j > i; j--)
//		{
//			if (data[j] < data[j - 1])
//			{
//				swap(data[j], data[j - 1]);
//			}
//		}
//	}
//}

////선택 정렬
//void selection_sort(int data[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		//최소값을 가진 인덱스
//		int idx = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (data[j] < data[idx])
//			{
//				idx = j;
//			}
//		}
//		swap(data[i], data[idx]);
//	}
//}
//
////삽입 정렬
//void insertion_sort(int data[], int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		int key = data[i];
//		int j = i - 1;
//		while ( j >= 0 && data[j] > key)
//		{
//			data[j + 1] = data[j];
//			j--;
//		}
//		data[j + 1] = key;
//	}
//}
//
//int main()
//{
//	int data[] = { 4, 2, 3, 5, 1 };
//	//bubble_sort(data, 5);
//	//selection_sort(data, 5);
//	insertion_sort(data, 5);
//
//	for (auto n : data)
//	{
//		cout << n << ", ";
//	}
//}

//int main()
//{
//    std::cout << "Hello Sort!\n";
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
