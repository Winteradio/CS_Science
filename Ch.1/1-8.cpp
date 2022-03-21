#include <iostream>
#include <string>

using namespace std;

class Vect{ // Vect 클래스 생성
	public:
		Vect(int n); // 생성자, 디폴트 크기 = 10
		Vect(const Vect& a); // 복사 생성자
		~Vect(); // 소멸자

	private:
		int* data; // 벡터를 저장하는 배열에 대한 포인터
		int size; // 백터의 크기
};

Vect::Vect(int n){ // 생성자 정의
	size = n;
	data = new int[n]; // 배열 자유공간에 메모리 할당
}

Vect::Vect(const Vect& a){ // a로부터의 복사 생성자 정의
	size = a.size; // 크기 복사
	data = new int[size]; // 새 배열을 할당
	for (int i = 0; i < size ; i ++){ // 벡터의 내용을 복사한다
			data[i] = a.data[i];
	}
}

Vect::~Vect(){ // 소멸자 정의
	delete[] data;  // 할당된 배열 삭제
	// 배열의 경우,삭제할 때 꼭 delete[] Variable로 코드를 진행한다.
	cout << "삭제 완료" << endl;
}

Vect& Vect::operator=(const Vect& a){ // a Vect로부터의 배정 연산자
	if (this != &a) { // 자체- 배정을 피한다.
	// this : 자기자신 객체에 대한 주소가 되도록 정의된다.
		delete [] data; // 옛 배열을 반환한다
		size = a.size; // 새 크기를 설정한다
		data = new int[size]; // 새 배열을 할당한다
		for (int i=0 ; i<size ; i ++){ // 벡터의 내용을 복사한다.
			data[i] = a.data[i];
		}
	}
	return *this;
}

int main(){
	Vect a(4);
	cout << " 1단계 ";
	Vect b = a; // 단순히 내용들을 전부다 복사하는 옅은 복사
	/*
	Vect c; // 디폴트 값으로 크기가 10인 벡터가 형성되어져있는 c
	c = a; // 이러한 크기가 10인 c에게다 a를 옅은 복사를 시켜주게 되면 c의 데이터에 대한 포인터를 잃어버리게 되므로 데이터 누수가 생기게 된다.
	무슨 문젠지 모르겠지만, 디폴트값이 선언이 되지 않는다.
	*/
	cout << " 2단계 " ;
	Vect e(a);
	/*
	삭제자의 경우에는 호출하였던 Vect들의 사용이 다 끝난 후 삭제가 되기 시작한다.
	*/
	// operator 사용법 나중에 다시 익히자
	}
