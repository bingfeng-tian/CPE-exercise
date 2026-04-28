// (CPE-0105B) 連續輸入-文零結尾-大數九九 : 連續輸入多行，每行一個整數，請輸出其是否為九九的倍數。最後一行為零，不需要處理。 
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    
    while (cin >>s && s!="0")
    {
    	int remainder = 0;
    	for (int i=0;i<s.length();i++)
    	{
    		remainder = (remainder*10 +(s[i]-'0')) %99;
    	}
    	
    	if (remainder==0)
    		cout <<"YES" <<endl;
    	else
    		cout <<"NO" <<endl;	
    }
    
    return 0;
}