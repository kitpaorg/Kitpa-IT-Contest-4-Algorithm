#include <bits/stdc++.h>
#include "testlib.h"
#include <cassert>
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define MAX 301010
#define MAXS 20
#define bb ' '
#define ln '\n'
#define Ln '\n'
#define MOD 998244353
#define INTMAX 1'000
int A[MAX];
int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int N = atoi(argv[2]);
	int minA = atoi(argv[3]);
	int maxA = atoi(argv[4]);
	int i;
	for (i = 1; i <= N; i++) A[i] = rnd.next(minA, maxA);
	cout << N << ln;
	for (i = 1; i <= N; i++) {
		cout << A[i];
		if (i == N) cout << ln;
		else cout << bb;
	}
}
