#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

/*
* 3 <= N <= 100'000
* 0 <= A_ij <= 1
* A_11 = A_2N = 1
*
* subtasks
* 1. N = 3
* 2. A_1i=A_2i for all i
* 3. There is a path connecting (1, 1) and (2, N)
* 4. No additional constraints
*
* Input Format
* N
* A_11 A_12 ... A_1N
* A_21 A_22 ... A_2N
*
* Output Format
* ans
*/

const int MINN = 3;
const int MAXN = 100'000;
const int SUB1N = 3;

int A[3][101010];
int chk[3][101010];

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);

	string subtaskstr = validator.group();
	if (subtaskstr.empty()) subtaskstr = "4";
	int subtask = atoi(subtaskstr.c_str());

	int N = inf.readInt(MINN, MAXN, "N");
	inf.readEoln();
	int i;
	for (i = 1; i <= N; i++) {
		A[1][i] = inf.readInt(0, 1, "A_i");
		if (i == N) inf.readEoln();
		else inf.readSpace();
	}
	for (i = 1; i <= N; i++) {
		A[2][i] = inf.readInt(0, 1, "A_i");
		if (i == N) inf.readEoln();
		else inf.readSpace();
	}
	inf.readEof();
	inf.ensuref(A[1][1] == 1, "(1, 1) must be available");
	inf.ensuref(A[2][N] == 1, "(2, N) must be available");
	if (subtask == 1) inf.ensuref(N == SUB1N, "subtask 1 condition failed");
	if (subtask == 2) {
		for (i = 1; i <= N; i++) inf.ensuref(A[1][i] == A[2][i], "subtask 2 condition failed");
	}
	if (subtask == 3) {
		chk[1][1] = 1;
		if (A[2][1]) chk[2][1] = 1;
		for (i = 2; i <= N; i++) {
			if (A[1][i] && chk[1][i - 1]) chk[1][i] = 1;
			if (A[2][i] && chk[2][i - 1]) chk[2][i] = 1;
			if (A[1][i] && A[2][i]) chk[1][i] = chk[2][i] = chk[1][i] | chk[2][i];
		}
		inf.ensuref(A[2][N], "subtask 3 condition failed");
	}
}
