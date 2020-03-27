#include <bits/stdc++.h> 
#define pb push_back
#define mp make_pair 
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a,n) a, a + n
  
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    t=1; 
    while( t-- ) {
        
        int n;
        cin >> n ;
        vector<int> v(n) ;
        
        for ( int i = 0 ; i < n ; ++i ) {
            cin >> v[i] ;
        }   
        
        int ans = 0 ;

        for ( int i = 0 ; i < n ; ++i ) {
            int temp = 1 ;
            
            //go right 
            for ( int j = i+1 ; j < n and v[j] <= v[j-1] ; ++j, ++temp ) 1;
            
            //go left 
            for ( int j = i-1 ; j >= 0 and v[j] <= v[j+1] ; --j, ++temp )1;
            
            
            ans = max(ans,temp) ;

        }


        cout << ans << endl ;

    }

    return 0 ;

}
