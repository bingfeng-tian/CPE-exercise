// (CPE-0101A) 連續輸入-先量後物-兩數之和  第一行為一整數N，後接N行，每行兩個整數，請輸出兩數之和。
#include <iostream>

using namespace std;

int main()
{
    int l;
    cin >> l;
    for(int i=0; i<l; i++){
        int a,b;
        cin >> a >> b;
        cout << a+b << endl;
    }
    return 0;
}

