#include <iostream>

using namespace std;

class Counter{	// 간단한 Counter  클래스
	public:
		Counter();	// 초기화
		int getCount(); // 현재의 Count를 얻는다
		void increaseBy(int x); // Count에 x를 더한다

	private:
		int count; // 카운터의 값
		/*
		private는 클래스 내부에서만 접근할 수 있도록하거나 friend를 이용한다.
		*/

};

Counter::Counter()
{count = 0;}

int Counter::getCount(){
	return count;}

void Counter::increaseBy(int x){
	count += x;}


int main(){
	Counter ctr;
	cout << ctr.getCount() << endl;
	ctr.increaseBy(3);
	cout << ctr.getCount() << endl;
	ctr.increaseBy(5);
	cout << ctr.getCount() << endl;
}
