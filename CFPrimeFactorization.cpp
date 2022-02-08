#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8 + 10;
int status[mx];

void sieve()
{
    int sq = sqrt(mx*1.0)+1;

    status[1] = 1;

    for(int i=4; i<=mx; i+=2)
    {
        status[i] = 1;
    }

    for(int i=3; i<=sq; i++)
    {
        if(status[i] == 0)
        {
            for(int j=i*i; j<mx; j+=i*2)
            {
                status[j] == 1;
            }
        }
    }

}

int main()
{
    int n;
    cin >> n;

    sieve();

    if(status[n] == 0)
    {
        cout << n << endl;
    }

    else{

    vector <int> prime_factorial;

    for(int i =2; i*i<=sqrt(n); ++i)
    {

        while(n%i == 0)
        {

            prime_factorial.push_back(i);
            n/=i;
        }
    }

     if(n>1)
    {
        prime_factorial.push_back(n);
    }

    //0(n);
    int cnt = 0;
    for(auto prime:prime_factorial)
    {
        cnt++;
        if(cnt == prime_factorial.size())
        {
            cout<< prime << endl;
        }
        else{
            cout << prime << "*";
        }

    }
    }

    }



