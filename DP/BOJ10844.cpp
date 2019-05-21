#include <iostream>

using namespace std;

int main(){
    int n;
    int dp[101][11];

    long sum = 0;

    cin>>n;

    dp[1][0] = 0;

    for(int i=1;i<=9;i++){
        dp[1][i] = 1;
    }

    for(int i=2;i<=n;i++){

        for(int j=0;j<=9;j++){
            if(j==0){

                dp[i][j] = dp[i-1][j+1];
            }
            else if(j==9){

                dp[i][j] = dp[i-1][j-1];
            }
            else{

                dp[i][j] = (dp[i-1][j-1]+dp[i-1][j+1])%1000000000;
            }

        }
    }

    for(int i=0;i<=9;i++){
        sum += dp[n][i];
    }
    cout<<sum%1000000000<<'\n';
}

//int sum 자료형은 틀리다 long으로 해야 된다