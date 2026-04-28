// (CPE-0103B) 連續輸入-檔尾結束-奇偶判斷 : 連續輸入多行，每行一個整數，請輸出該數的奇偶性。 
#include <iostream>

using namespace std;
int main()
{
	int num;
	while(cin >>num)
	{
		if (num%2==0)
		{
			cout <<"偶" <<endl;
		}else
		{
			cout <<"奇" <<endl;
		}
	}
	return 0;
}
