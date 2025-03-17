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
int P[MAX];
int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int N = atoi(argv[2]);
	int K = atoi(argv[3]);
	int i;
	for (i = 1; i <= N - 2; i++) P[i] = i + 1;
	for (i = N - 2; i >= 1; i--) swap(P[i], P[rnd.next(1, i)]);
	for (i = 1; i <= N; i++) A[1][i] = A[2][i] = 1;
	for (i = 1; i <= K; i++) A[1][P[i]] = A[2][P[i]] = 0;	
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
