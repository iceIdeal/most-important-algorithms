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


int search(int arr[], int size, int target) {

    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {

    ios;

    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int result = search(arr, size, target);


    if (result != -1) {
        cout << "Target is presented at index: " << result << endl;
    } else {
        cout << "Target is not presented!" << endl;
    }

    return 0;
}