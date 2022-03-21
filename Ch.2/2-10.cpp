#include <iostream>
#include <string>

using namespace std;

template <typename T>
class BasicVector{
	public :
		BasicVector(int capac = 10); // 생성자
		T& operator[](int i)
		{return a[i]; } // 색인 i의 요소에 접근

	private :
		T* a;
		int capacity;
};

template<typename T>
BasicVector<T>::BasicVector(int capac){
	capacity = capac;
	a = new T[capacity];
};

int main(){
	BasicVector<int> iv(5);
	BasicVector<double> dv(20);
	BasicVector<string> sv(10);

	iv[3] = 8;
	cout << iv[3] << endl;

	return 0;
};
