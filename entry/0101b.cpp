// (CPE-0101B) 連續輸入-先量後物-奇偶判斷 : 第一行為一整數N，後接N行，每行有一個整數，請輸出該整數的奇偶性。 
#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{	
		int num;
		cin>>num;
		if(num %2 == 0)
		{
			cout << "偶" << endl;
		}else
		{
			cout << "奇" << endl;
		}
	}
	return 0;
}