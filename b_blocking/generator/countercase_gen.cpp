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
	int shape = atoi(argv[3]);
	int loc = atoi(argv[4]);
	/*
	* shape #1
	* 0
	* 0
	*
	* shape #2
	* 01
	* 10
	*
	* shape #3
	* 10
	* 01
	*/
	int i;
	for (i = 1; i <= N; i++) A[1][i] = A[2][i] = 1;
	if (shape == 1) A[1][loc] = A[2][loc] = 0;
	if (shape == 2) A[1][loc] = A[2][loc + 1] = 0;
	if (shape == 3) A[1][loc + 1] = A[2][loc] = 0;
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
