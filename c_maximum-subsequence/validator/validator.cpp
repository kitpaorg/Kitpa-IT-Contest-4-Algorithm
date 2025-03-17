#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

/*
* 1 <= N <= 300'000
* |A_i| <= 1'000
*
* subtasks
* 1. A_i >= 0
* 2. N <= 50
* 3. N <= 500
* 4. N <= 5000
* 5. There are at most 5 $i$s which satisfy $A_i < 0$
* 6. No additional constraints
* 
* Input Format
* N
* A_1 A_2 ... A_N
* 
* Output Format
* ans_1 ans_2 ... ans_N
*/

const int MINN = 1;
const int MAXN[7] = { 0, 300'000, 50, 500, 5'000, 300'000, 300'000 };
const int MINA[7] = { 0, 0, -1'000, -1'000, -1'000, -1'000, -1'000 };
const int MAXA = 1'000;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);

	string subtaskstr = validator.group();
	if (subtaskstr.empty()) subtaskstr = "3";
	int subtask = atoi(subtaskstr.c_str());

	int minN = MINN, maxN = MAXN[subtask];
	int minA = MINA[subtask], maxA = MAXA;

	int maxNegativeCnt = maxN;
	if (subtask == 5) maxNegativeCnt = 5;

	int N = inf.readInt(minN, maxN, "N");
	inf.readEoln();
	int i;
	int negativeCnt = 0;
	for (i = 1; i <= N; i++) {
		int a = inf.readInt(minA, maxA, "A_i");
		if (a < 0) negativeCnt++;
		if (i == N) inf.readEoln();
		else inf.readSpace();
	}
	inf.ensuref(negativeCnt <= maxNegativeCnt, "subtask 5 condition failed");
	inf.readEof();
}
