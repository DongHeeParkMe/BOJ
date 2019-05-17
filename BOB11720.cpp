#include <iostream>

using namespace std;

int main(){
    int n;
    int sum =0;
    char c;
    cin>> n;


    for(int i=1;i<=n;i++){
        cin>> c;
        sum += (c-'0');

    }
    cout<<sum<<endl;
}

//int i=1을  int i만 적어서 틀렸다