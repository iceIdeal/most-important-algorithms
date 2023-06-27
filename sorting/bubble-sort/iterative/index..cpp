/**
     author: Aisultan Kuandykov
     username: iceIdeal
**/

#include <bits/stdc++.h>


using namespace std;

//typedef
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
typedef stack<ll> stk;
typedef queue<ll> que;
typedef deque<ll> dq;
typedef priority_queue<ll> pq;
typedef map<string, ll> ma;
typedef set<ll> se;

//macro
#define pb push_back
#define pf push_front
#define pbk pop_back
#define pbf pop_front
#define ft front
#define pp pop
#define bk back
#define cr clear
#define mp make_pair
#define F first
#define S second
#define endl "\n"
#define all(x) x.begin(), x.end()
#define forn(i, a, b) for(ll i = a; i < b; ++i)
#define ios ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define DEBUG

//determinant
const ll MOD = 1e9 + 7;
const ld PI = 3.1415926535897932384626433832795;


void sort(int arr[], int size) {

    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }

}


int main() {

    ios;

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, n);


    //print
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;


    return 0;
}