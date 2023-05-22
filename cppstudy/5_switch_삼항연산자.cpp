int main() {
	int itest = 20;
	switch (itest)
	{
	case 10:
		break;
	case 20:
		break;
	default:
		break;
	}

	//삼항연산자
	//:?
	itest == 20 ? itest = 100 : itest = 200;
	//itest ? 20이라면
	//itest=100 : 아니라면 itest=200
}