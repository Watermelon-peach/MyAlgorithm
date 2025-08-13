// SortTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using namespace std;

//선형 탐색
bool linear_search(int data[], int n, int target)
{
	for (int i = 0; i < n; i++)
	{
		if (data[i] == target)
		{
			return true;
		}
	}

	return false;
}

//이진 탐색 - (오름차순)정렬된 데이터
bool binarty_search(int data[], int n, int target)
{
	int lower = 0;			//시작 인덱스
	int upper = n - 1;		//마지막 인덱스

	while (lower <= upper)
	{
		int middle = (lower + upper) / 2;
	}

	
}

////std sort() 예제
//int main()
//{
//	//배열의 정렬
//	int arr[5] = { 4, 2, 3, 5, 1 };
//	//sort(arr, arr + 5);
//	//sort(begin(arr), end(arr));
//	//sort(begin(arr), end(arr), greater<>());	//내림차순
//	sort(begin(arr), end(arr), less<>());		//오름차순
//
//	for (auto n : arr)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//
//	//Vector 정렬
//	vector<string> vec = { "orange", "banana", "apple", "lemon" };
//	//sort(vec.begin(), vec.end());
//	sort(vec.begin(), vec.end(), greater<>());
//
//	for (auto& a : vec)
//	{
//		cout << a << ", ";
//	}
//	cout << endl;
//}

////분할, 정렬데이터의 맨 처음 값을 피벗으로 정하고
////피벗을 기준으로 왼쪽과 오른쪽으로 데이터를 나눈다
//int partition(int data[], int left, int right)
//{
//	int pivot = data[left];
//	int i = left + 1;
//	int j = right;
//
//	while (true)
//	{
//		//오른 쪽으로 이동할 데이터 찾기
//		while (data[i] <= pivot && i <= right)
//		{
//			i++;
//		}
//
//		//왼쪽으로 이동할 데이터 찾기
//		while (data[j] > pivot && j > left)
//		{
//			j--;
//		}
//
//		if (i < j)
//		{
//			swap(data[i], data[j]);
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	//피벗을 왼쪽 데이터와 오른쪽 데이터 사이에 넣는다
//	swap(data[left], data[j]);
//
//	return j;
//}
//
//void quick_sort(int data[], int left, int right)
//{
//	//기저조건
//	if (left >= right)
//		return;
//
//	//재귀호출부
//	int p = partition(data, left, right);
//	quick_sort(data, left, p-1);			//피벗의 왼쪽 데이터를 퀵정렬
//	quick_sort(data, p + 1, right);			//피벗의 오른쪽 데이터를 퀵정렬
//}
//
//int main()
//{
//	int data[] = { 5, 6, 7, 3, 1, 9, 2, 4, 8 };
//	quick_sort(data, 0, size(data) - 1);
//	
//	for (auto n : data)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//}

////병합시 병합내용을 담을 임시 변수
//int buff[256];
//
////병합 
//void merge(int data[], int left, int mid, int right)
//{
//	int i = left, j = mid + 1, k = left;
//
//	while (i <= mid && j <= right)
//	{
//		if (data[i] <= data[j])
//		{
//			buff[k++] = data[i++];
//		}
//		else
//		{
//			buff[k++] = data[j++];
//		}
//	}
//
//	while (i <= mid)
//	{
//		buff[k++] = data[i++];
//	}
//
//	while (j <= right)
//	{
//		buff[k++] = data[j++];
//	}
//
//	//정렬된 임시 저장 데이터를 data에 다시 저장
//	for (int x = left; x <= right; x++)
//	{
//		data[x] = buff[x];
//	}
//}
//
////병합 정렬
//void merge_sort(int data[], int left, int right)
//{
//	//기저 조건
//	if (left >= right)
//		return;
//
//	//재귀 호출
//	int mid = (left + right) / 2;
//	merge_sort(data, left, mid);
//	merge_sort(data, mid + 1, right);
//	merge(data, left, mid, right);
//}
//
//
//int main()
//{
//	int data[] = { 2, 6, 7, 4, 1, 8, 5 ,3 };
//	merge_sort(data, 0, 7);
//
//	for (auto n : data)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//}


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
