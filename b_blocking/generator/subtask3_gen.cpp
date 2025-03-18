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
int A[3][MAX];
int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int N = atoi(argv[2]);
	int i;
	A[1][1] = 1;
	A[2][1] = rnd.next(0, 1);
	for (i = 2; i <= N; i++) {
		int t = 0;
		if (!A[1][i - 1]) t = 1;
		if (!A[2][i - 1]) t = 2;
		if (t) {
			A[1][i] = A[1][i - 1];
			A[2][i] = A[2][i - 1];
			A[t][i] = rnd.next(0, 1);
		}
		else {
			A[1][i] = A[1][i - 1];
			A[2][i] = A[2][i - 1];
			int v = rnd.next(0, 2);
			A[v][i] = rnd.next(0, 1);
		}
	}
	A[2][N] = 1;
	cout << N << ln;
	for (i = 1; i <= N; i++) {
		cout << A[1][i];
		if (i == N) cout << ln;
		else cout << bb;
	}
	for (i = 1; i <= N; i++) {
		cout << A[2][i];
		if (i == N) cout << ln;
		else cout << bb;
	}
}
