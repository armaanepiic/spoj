// Bismillahir rahmanir rahim
// Arman Hossain C193033
// Programming is fun with emotion
#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vpi = vector<pair<int, int>>;
using vvs = vector<vector<string>>;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz(s) (s).length()
#define digits(x) trunc(log10(x)) + 1
#define all(x) (x).begin(), (x).end()
#define sumvec(x) accumulate((x).begin(), (x).end(), 0)
#define rev_sort(x) sort((x).begin(), (x).end(), greater<int>())
#define uniq_element(x) unique((x).begin() , (x).end()) - (x).begin()
#define maxelement(x) max_element((x).begin(), (x).end()) - (x).begin()
#define minelement(x) min_element((x).begin(), (x).end()) - (x).begin()
#define uptolow(x) transform((x).begin(), (x).end(), (x).begin(), :: tolower);
#define lowtoup(x) transform((x).begin(), (x).end(), (x).begin(), :: toupper);

int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

const int N = 90000001;
bool sieve[N];
vector<int>primes;

void sieve_generate()
{
    
    for (int i = 2; i * i <= N; ++i)
    {
        if (!sieve[i]) {
            for (int j = i * i; j <= N; j += i)
            {
                sieve[j] = 1;
            }
        }
    }
    for (int i = 2 ;i < N; ++i)
    {
        if(!sieve[i]){
            primes.pb(i);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:input.txt", "r", stdin);
    freopen("F:output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve_generate();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << primes[n-1] << endl;
    }


    return 0;
}
