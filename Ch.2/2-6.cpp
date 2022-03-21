/*
"C++에서의 상속의 예제"

	first : 수열의 첫번째 값
	cur : 수열의 현재 값

	firstValue() : 수열을 초기값으로 다시 맞추고 그 값을 반환한다.
	nextValue() : 다음 값으로 수열을 진행시키고 값을 반환한다.
	printProgression(n) : 수열을 초기화하고 처음 n개의 수열값을 인쇄한다.
*/

#include <iostream>
#include <string>

using namespace std;

class Progression{
	public :
		Progression(long f = 0) // 생성자
			: first(f),cur(f){}
		virtual ~Progression() {}; // 소멸자
		void printProgression(int n); // 처음 n개 값을 출력

	protected :
		virtual long firstValue(); // 리셋
		virtual long nextValue(); // 증가

	protected:
		long first; // 첫번째 값
		long cur; // 현재 값
};

void Progression::printProgression(int n){ // n개 값을 출력 
	cout << " " << firstValue() << endl; // 첫번째 값 출력
	for (int i = 1; i<= n ; i++){ // 두번째부터 n번째까지 출력
		cout << " " << nextValue();
		// cout -> for문 cout 까지 연결
		// 다음 for 단계에선 cout귾김, for 문의 이전단계의 cout과 현 단계의 cout 연결 X
	cout << endl;
	}
}

long Progression::firstValue(){ // 리셋
	cur =first;
	return cur;
}

long Progression::nextValue(){ // 증가
	return ++cur;
}

class ArithProgression : public Progression{
	public :
		ArithProgression(long i = 1); // 생성자
	protected :
		virtual long nextValue(); // 증가 -> 특수화
	protected :
		long inc; // 증가량 -> 확장??
};

ArithProgression::ArithProgression(long i)
	:Progression(), inc(i) {}

long ArithProgression::nextValue(){
	cur += inc;
	return cur;
}

class GeomProgression : public Progression {
	public :
		GeomProgression(long b = 2);
	protected:
		virtual long nextValue(); // 증가 -> 특수화
	protected :
		long base; // 곱셈량 -> 확장?
};

GeomProgression::GeomProgression(long b)
	:Progression(1), base(b) {}

long GeomProgression::nextValue() {
	cur *= base;
	return cur;
}

class FibonacciProgression : public Progression{
	public :
		FibonacciProgression(long f=0, long s= 1); // 생성자
	protected :
		virtual long firstValue(); // 기본 클래스와 유도 클래스 둘 다에 virtual 있어야 함
		virtual long nextValue(); 
	protected :
		long second;
		long prev;
};
FibonacciProgression::FibonacciProgression(long f, long s)
	:Progression(f), second(s), prev(second-first) {}
 
long FibonacciProgression::firstValue(){
	cur = first;
	prev = second - first;
	return cur;
}
 
long FibonacciProgression::nextValue(){
	long temp = prev;
	prev = cur;
	cur += temp;
	return cur;
}


int main(){
	cout << "Progression" << endl;
	Progression Prog;
	Prog.printProgression(10);

	cout << "ArithProgression" << endl;
	ArithProgression arit;
	arit.printProgression(20);

	cout << "FibonacciProgression" << endl;
	FibonacciProgression Fib;
	Fib.printProgression(20);
	return 0;
}

