#include <iostream>
using namespace std;
int main()
  
{
    int sum_a=0,sum_b=0,sample=0,diff=0;
    
    for(int i=1;i<=100;i++)
    {
        sum_a+=i*i;
    }
     for(int i=1;i<=100;i++)
    {
        sum_b+=i;
    }
    sample = sum_b*sum_b;
    cout<<"sum of products:"<<sum_a<<endl;
    cout<<"product of sums"<<sample<<endl;
    diff= sample - sum_a;
    cout<<"difference:"<<diff<<endl;
    return 0;
}

