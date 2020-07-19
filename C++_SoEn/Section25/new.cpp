#include <Turboc.h>

struct tag_Friend
{
	char Name[10];
	int age;
	double Height;
};

int main() {
	int* pi = new int;
	*pi = 123;
	printf("*pi=%d\n", *pi);
	delete pi;

	double* pd = new double;	//8바이트 할당
	char* pc = new char;		//1바이트 할당

	//new 연산자는 기본 타입 뿐만 아니라 구조체나 배열, 사용자 정의형 타입도 할당할수있다. 
	tag_Friend* pF = new tag_Friend;
	strcpy(pF->Name, "아무개");
	pF->age = 22;
	pF->Height = 177.7;
	printf("이름=%s, 나이=%d, 키=%.1f\n", pF->Name, pF->age, pF->Height);
	delete pF;
	/*new 연산자에 의해 sizeof만큼의 메모리가 할당되고, tag_Friend*타입이 리턴된다.
	구조체를 할당과 동시에 초기화 하려면 생성자 함수라는 것을 만들어야한다.
	*/
	//배열을 할당하는 방법은 조금 특수하다. 할당타입 다음의[]안에 배열의 크기를 지정한다. 
	int* ar = new int[5];
	int i;
	for (i = 0; i < 5; i++) {
		ar[i] = i;
	}
	for (i = 0; i < 5; i++) {
		printf("%d번째 = %d\n", i, ar[i]);
	}
	delete[] ar;
	/*new int[5]에 의해 정수형 변수 5개를 저장할수 있는 메모리가 할당되며 int*타입이 리턴된다.
	리턴값을 int*형의 ar로 대입받으면 ar은 정수형 배열과 동등하며 배열처럼 사용이  가능하다.
	배열을 할당할때는 new 연산자로도 초기값지정이 불가능하다.
	동적으로 할당하는 것이므로 할당할 배열의 크기를 지정하는값이 상수가 아니여도되고 변수로도 크기를 지정할수 있다.
	*/
	//동적으로 할당한 배열을 삭제할때는 delete대신 delete[]문을 반드시 사용해야 한다.(중요)
	//new/delete의 가장 큰 장점은 객체가 생성, 파괴 될때 생성자와 파괴자가 호출된다는 점이다. 
	return 0;
}
