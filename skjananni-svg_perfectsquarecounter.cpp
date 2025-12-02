#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sqr=sqrt(n);
    int count=0;
    for(int i=1;i<=sqr;i++)
    {
        cout<< i * i << " ";
        count++;
    }
    cout<<endl<<count;
    return 0;
}
