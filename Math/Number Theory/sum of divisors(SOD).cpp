#include <bits/stdc++.h>

using namespace std;

bitset<100000> bs;
vector<int> primes;

void sieve(long long upper_bound) {
    primes.erase(primes.begin(), primes.end());
    bs.set();
    bs[0] = bs[1] = 0;
    primes.push_back(2);
    for(long long i = 3; i <= upper_bound + 1; i += 2) {
        if(bs[i]) {
            for(long long j = i * i; j <= upper_bound + 1; j += 2*i)
                bs[j] = 0;
            primes.push_back((int) i);
        }
    }
}


int divisorSum(int n) {
    if (n < 1) return 0;
    sieve(n+1);
    int sum = 1;
    for (int i = 0;i<primes.size(); i++) {
        if (n % primes[i] == 0) {
            int cnt = 1;
            while (n % primes[i] == 0) {
                n /= primes[i];
                cnt++;
            }
            sum *= (pow(primes[i], cnt) - 1) / (primes[i] - 1);
        }
    }

    return sum;
}

int main()
{
    int n;
    cin>>n;

    cout<<divisorSum(n)<<endl;



    return 0;
}
