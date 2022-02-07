#include<bits/stdc++.h>
using namespace std;


int bigmod(int base, int power, int mod)
{
    if(power == 0)
    {
        return 1;
    }

    else if(power % 2 == 1){
        int a = base % mod;
        int b = (bigmod(base, power-1, mod)) % mod;
        return (a*b) % mod;
    }

    else if(power % 2 == 0)
    {
        int a = bigmod(base, power/2, mod);
        return (a*a) % mod;
    }

}



int main()
{
    int base, power, mod;

    cin >> base >> power >> mod;

    cout << bigmod(base, power, mod) << endl;
}

