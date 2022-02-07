#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <int> prime_factorial;

    for(int i =2; i<=n; i++)
    {
        while(n%i == 0)
        {
            prime_factorial.push_back(i);
            n/=i;
        }
    }
    //0(n);

    for(auto prime:prime_factorial)
    {
        cout << prime << " ";
    }
}
