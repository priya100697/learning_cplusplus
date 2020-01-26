#include <iostream>
using namespace std;

int main() 
{
	
	int n;
	cin >> n;
	
    int  i=1;
    bool res = false;
    for( ;i<=n;i*=4)
    {
        //cout<<i<<endl;
        if(i==n)
        {
            res = true;
            cout<<"is a power\n";
        }
    }
    
    if(res == false)
        cout<<"not a power\n";
	
	return 0;
}