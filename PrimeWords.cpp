#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8 + 10;
bool status[mx];
//vector <int> prime;
void sieve()
{
    int sq = sqrt(mx*1.0)+1;
    
    status[1] = 0;

 //   prime.push_back(2);

    for(int i=4; i<=mx; i+=2)
    {
        status[i] = 1;        
    }

    for(int i=3; i<=sq; i+=2)
    {
      //  prime.push_back(i);

        if(status[i]==0)
        {
            for(int j=i*i; j<mx; j+=i*2)
            {
                status[j] = 1;
            }
        }
    }
    
} 

int main()
{
    sieve();

    string str;

    while(cin >> str)
    {
        int sum = 0;
        for(int i = 0; str[i]; i++) {

			if(str[i] >= 'a' && str[i] <= 'z') 
            {
				sum += str[i]-'a'+1;
            }

			else {
			
            	sum += str[i]-'A'+27;
            
            }
        }



        if(status[sum] == 0)
        {
            cout << "It is a prime word." << endl;
        }

        else {
            cout << "It is not a prime word." << endl;
        }

       

    }
}