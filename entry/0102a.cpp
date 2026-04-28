// (CPE-0102A) 連續輸入-量量後物-多數之和 : 第一行為一整數N，後接N行，每行開頭一個數字M，後接M個整數，請輸出M個整數之和。 

#include <iostream>

using namespace std;
int main()
{
	int c1;
	cin >> c1;
	for(int i=0;i<c1;i++)
	{
		int c2;
		cin >> c2;
		int sum=0;
		for(int j=0;j<c2;j++)
		{
			int n;
			cin >>n;
			sum += n;
		}
		cout << sum << endl;
	}
	return 0;
}