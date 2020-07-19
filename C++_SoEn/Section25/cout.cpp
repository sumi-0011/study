#include <iostream>	
using namespace std;

void main() {
	cout << "Welcome c++" << endl;
	//여러개의 데이터를 이어서 출력할 떄는 <<연산자를 계속해서 사용
	int i = 123;
	char ch = 'A';
	double d = 3.14;
	char str[] = "문자열";
	cout << i << ch << d << str << endl;
	
	//다음은 cin연산자로 입력을 받는다. 
	
	cout << "정수를 입력하십시오: ";
	cin >> i;
	cout << "입력한 값은 " << i << "입니다. " << endl;
}