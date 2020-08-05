#include <iostream>

using namespace std;

int main()
{
    int N = 0, K = 0, cur = 0;
    cin >> N >> K;
    int *coins = new int[N];
    int num_coin = 0;

    for (int i = 0; i < N; i++)
    {
        cin>>coins[i];
    }

    for (int i = N-1; i >= 0; i--)
    {
        if(coins[i] > K)
        {
            continue;
        }
        
        cur = K/coins[i];
        num_coin += cur;
        K-=(coins[i]*cur);
    }
    cout << num_coin << endl;
    return 0;
}