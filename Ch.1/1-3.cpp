#include <iostream>

using namespace std;

void increase(int& num){
	++num; 
	/*
	전위 : Num ++ == 변수 반환 후 변화
	후위 : ++ Num == 변수 반환 후 변화
	
	반복문상에서만 중요하고 나머지 관계식에서는 거의 동일하게 작용한다.
	*/
	cout << num << endl;
}

void o_increase(int num){
	++num;
	cout << num << endl;
}

int main()
{	
	int o_num= 5;
	int num = 5;

	o_increase(o_num);
	increase(num);
	cout << "일반 " << o_num << endl;
	cout << "레퍼런스" << num << endl;
	return 0;
}
