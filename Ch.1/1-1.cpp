#include <cstdlib> // void 상수인 EXIT_SUCCESS를 호출하기 위해
#include <iostream> //출력 함수 cout를 호출하기 위해

// 이 프로그램은 두 정수 x와 y를 입력받아 그들의 합을 출력한다

int main(){
	int x, y;
	std::cout << "Please enter two numbers: ";
	std::cin >> x >> y;
	// x 입력한 후 y를 입력한다

	int sum = x + y;
	std::cout << "Their sum is " << sum << std::endl;
	return EXIT_SUCCESS;
}
