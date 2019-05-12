//입력의 마지막에는 0 두 개가 들어온다. = A와 B가 모두 0인경우에 프로그램을 종료한다.

#include <iostream>;
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b){
        if(a==0&&b==0){
            break;
        }
        cout<<a+b<<endl;}

}

