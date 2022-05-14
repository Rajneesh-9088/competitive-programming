#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
// using namespace __gnu_pbds;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(), (x).end()

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }

template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v)
{
	for (auto &it : v)
		cin >> it;
	return istream;
}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
void precision(int a) {cout << setprecision(a) << fixed;}
/*--------------------------------------------------------------------------------------------------------------------------*/


struct node {
	int  v = 0;
	node() {}
	node(int  val) {
		v = val;
	}

	void merge(const node &l, const node &r) {
		v = l.v + r.v;
	}
};


struct update {
	int  v  = 0;
	update() {}
	update(int  val) {
		v = val;
	}

	void combine(update &other, const int32_t & tl, const int32_t &tr) {
		v += other.v;
	}

	void apply(node &x, const int32_t & tl, const int32_t &tr) {
		x.v += (tr - tl + 1) * v;
	}
};

// template<typename node, typename update>


struct segtree {
	int  len;
	vector<node> t;
	vector<update> u;
	vector<bool> lazy;
	node identity_element;
	update identity_transformation;
	segtree(int  l) {
		len =  l;
		t.resize(4 * len);
		u.resize(4 * len);
		lazy.resize(4 * len);
		identity_element = node();
		identity_transformation = update();
	}

	void pushdown(const int32_t &v, const int32_t &tl, const int32_t &tr) {
		if (!lazy[v]) return;
		int32_t tm = (tl + tr) >> 1;
		apply(v << 1, tl, tm, u[v]);
		apply(v << 1 | 1, tm + 1, tr, u[v]);
		u[v] = identity_transformation;
		lazy[v] = 0;
	}

	void apply(const int32_t &v, const int32_t &tl, const int32_t & tr,  update upd) {
		if (tl != tr) {
			lazy[v] = 1;
			u[v].combine(upd, tl, tr);
		}
		upd.apply(t[v], tl, tr);
	}

	template<typename T>
	void build(const T &arr, const int32_t &v, const &tl, int32_t &tr) {
		if (tl == tr) {
			t[v] = arr[tl];
			return;
		}
		int32_t tm = (tl + tr) >> 1;
		build(arr, v << 1, tl, tm);
		build(arr, v << 1 | 1, tm + 1, tr);
		t[v].merge(t[v << 1], t[v << 1 | 1]);
	}

	node query(const int32_t & v, const int32_t & tl, const int32_t & tr, const int32_t &l, const  int32_t &r) {
		if (l > tr || r < tl) {
			return identity_element;
		}

		if (tl >= l and  tr <= r) {
			return t[v];
		}

		pushdown(v, tl, tr);
		int32_t tm = (tl + tr) >> 1;
		node a = query(v << 1, tl, tm, l, r), b = query(v << 1 | 1, tm + 1, tr, l, r), ans;
		ans.merge(a, b);
		return ans;
	}

	void rupd(const int32_t & v, const int32_t & tl, const int32_t & tr, const int32_t &l, const int32_t & r, const  update &upd) {
		if (l > tr or r < tl) {
			return;
		}

		if (tl >= l and tr <= r) {
			apply(v, tl, tr, upd);
			return;
		}

		pushdown(v, tl, tr);
		int32_t tm = (tl + tr) >> 1;
		rupd(v << 1, tl, tm, l, r, upd);
		rupd(v << 1 | 1, tm + 1, tr, l, r, upd);
		t[v].merge(t[v << 1], t[v << 1 | 1]);
	}

public:
	template<typename T>
	void build( const  T & arr) {
		build(arr, 1, 0, len - 1);
	}

	node query(const int32_t &l, const int32_t &r) {
		return query(1, 0, len - 1, l, r);
	}

	void rupd(const int32_t &l, const int32_t &r, const update &upd) {
		rupd(1, 0, len - 1, l, r, upd);
	}


};



void solve() {
	segtree s(100);
	s.rupd(2, 6, 3);
	s.rupd(5, 9, 10);
	s.rupd(3, 6, -5);
	for (ll i = 0; i < 15; i++) {
		cout << s.query(i, i).v << " ";
	}
	cout << endl;
	cout << s.query(2, 5).v << endl;
}






int main() {
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
	fastio();
	auto start1 = high_resolution_clock::now();

	solve();

	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
	cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}
