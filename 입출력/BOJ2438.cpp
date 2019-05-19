#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;

    for(int i=1; i<=n; i++){

        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<'\n';
    }
}

//처음에 습관적으로 cout<<"*"<<'\n'; 으로 써서 모양이 이상하게 나왔다.