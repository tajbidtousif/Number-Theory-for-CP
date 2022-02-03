#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8 + 10;
bool status[mx];
vector <int> prime;
int main()
{
    int sq = sqrt(mx*1.0)+1;
    
    status[1] = 1;
    prime.push_back(2);

    for(int i=4; i<=mx; i+=2)
    {
        status[i] = 1;        
    }

    for(int i=3; i<=sq; i+=2)
    {
        prime.push_back(i);
        if(status[i]==0)
        {
            for(int j=i*i; j<mx; j+=i*2)
            {
                status[j] = 1;
            }
        }
    }

    for(int i=0; i<10; i++)
    {
        cout << prime[i] << endl;
    }


    
    return 0;
} 