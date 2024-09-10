#include <iostream> 
using namespace std;
int main()
{
    int a=0,b=1;
    int sum=0;
    while(b<=4000000)
    {
        int next=a+b;
        a=b;
        b=next;
        if(b%2 == 0)
        {
            sum+=b;
        }
    }
cout<<"Sum of even-valued Fibonacci terms below 4 million:"<<sum<<endl;
    return 0;
}
