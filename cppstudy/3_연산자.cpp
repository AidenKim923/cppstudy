﻿int main() {

	//연산자
	//대입연산자,a=b(a에b의 값을 넣어라)

	//피연산자:연산을 당하는입장 ex){10}을 2로 나눈다

	//산술 연산자
	//+,-,*,/,%(모듈러스,나머지,피연산자가 모두 정수여야함)
	//++,--
	int data = 10 + 10;//(더하기 먼저 계산후 대입)
	//data = data + 20;
	data += 20;//(데이터에 20을 더한 값을 다시 데이터에 대입)


	data = 10. / 3.;

	//증감연산자
	//++,-- 한 단계 증가또는감소
	data = 0;
	--data;//전위
	data--;//후위

	++data;//전위
	data++;//후위
	//후위 연산자로 사용하는경우 연산자 우선순위가 가장 나중으로 밀린다
	//특별히 구분지어야할 상황이 아니라면 증감연산자는 주로 전위를 사용한다
	//후위로 쓰다보면 효율이 안좋은 함수를 호출할수있음(나중에 알게됨)

	data = 0;
	int a = 10;
	data = a++;//대입후 증가 data==10
	data = ++a;//증가후 대입 data==11

	// 논리 연산자
	// !(역), &&(And), ||(OR)
	// 참(true), 거짓(false)
	// 참 : 0이 아닌 값, 주로 1
	// 거짓 : 0
	bool truefalse = false;
	bool IsTrue = 100;
	IsTrue = true;
	IsTrue = !IsTrue;

	int iTrue = 100;
	iTrue = !iTrue;

	iTrue = 0 && 200;
	iTrue = 0 || 0;
}