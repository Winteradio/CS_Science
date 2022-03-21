/*
"템플릿" 

	"template" : 템플릿을 사용한 프로그래밍 -> 일반화(Generic) 프로그래밍
				C++에서의 템플릿은 함수나 클래스를 만들 수 있는 틀

				예제) 템플릿을 사용하지 않고 여러 타입에 대해서 동작하는 함수를 만들려면,
					각 타입에 대해 함수를 오버로딩 해야한다.
						>> 파이썬처럼

				"특수화" : 다양한 타입을 고려하다보면 타입이 다를 때, 특정 타입에 대해서는
						다른 기능을 수행하도록 할 필요도 있다.
						이것을 템플릿의 특수화라고 한다.
						함수 오버로딩과 비슷하게 이해할 수 있다.

				"정의" : 헤더파일에서 선언과 정의가 전부 다 진행되어야 한다.

*/

#include <iostream>

using namespace std;

template <typename T> // template 구체화
T myfunc(T a, T b){
	return a + b;
};

template<> // template 특수화
int* myfunc<int*>(int* a, int* b){
	cout << a[2] + b[2]<<endl;
};
int main(){
	int str1[10] = {1,2,3,4,5,6,7,8,9,0};
	int str2[10] = {2,3,4,5,6,7,8,9,0,1};
	myfunc(str1,str2);
	cout << myfunc(5,5);
	system("pause");
}
