// (CPE-0104B) 連續輸入-飄零結尾-兩點之和 : 連續輸入多行，每行兩個二維平面的點座標(x與y)，請輸出這兩點的和。最後一行為四個0，不需要處理。 
#include <iostream>

using namespace std;
int main()
{
	int x1, y1;
	int x2, y2;
	
	while (true)
	{
		cin >>x1 >>y1;
		cin >>x2 >>y2;
		if(x1==0 && y1==0 && x2==0 && y2==0)
			break;
		else
		{
			cout <<"(" <<x1+x2 <<"," <<y1+y2 <<")" <<endl;
		}
	}
	return 0;
}