// (CPE-0102B) 連續輸入-量量後物-奇偶判斷 : 第一行為一整數N，後接N行，每行開頭一個數字M，後接M個整數，請輸出M個整數的奇偶性。
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		int n1;
		cin >>n1;
		int t;
		for(int j=0;j<n1;j++)
		{
			cin >>t;
			if(t%2==0)
			{
				cout <<"偶";
			}else
			{
					cout <<"奇";
			}
		}
		cout <<endl;
	}
	return 0;
}