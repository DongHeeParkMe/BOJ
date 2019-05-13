#include <iostream>
using namespace std;

int main()
{
    int a,b,x;

    cin>>x;

    for(int i=1;i<=x;i++)
    {
        cin>>a>>b;

        cout<<"Case #"<<i<<": "<<a<<" + "<<b<<" = "<<a+b<<endl;

    }

    return 0;
}

//띄어쓰기를 잘하자. 테스트케이스와 띄어쓰기 까지 똑같이 나와야한다