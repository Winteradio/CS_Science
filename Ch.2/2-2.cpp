#include <iostream>
#include <string>

using namespace std;

class Base{
	private :
		int priv;

	protected : // 유도 클래스(자식 클래스)에게 특정 접근 권한을 주는 protected 선언
		int prot:

	public:
		int publ;
};

class Derived : public Base{
	void someMemberFuction(){
		cout << priv; // 오류 : private 멤버이기에
		cout << prot; // OK
		cout << publ; // OK
	}
};

class Unrelated {
	Base X;

	void anotherMemberFunction(){
		cout << X.priv; // 오류 : private 멤버
		cout << X.prot; // 오류 : Non- 유도
		cout << X.publ; // OK
	}
};
