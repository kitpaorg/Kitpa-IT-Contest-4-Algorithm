#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    int subtask = atoi(validator.group().c_str());
    int A = inf.readInt(0, 5000, "A"); inf.readSpace();
    int B = inf.readInt(1, 60, "B"); inf.readSpace();
    int C = inf.readInt(1, 2000, "C"); inf.readEoln();
    int T = inf.readInt(1, 2000, "T"); inf.readEoln();
    
    if (subtask == 1) ensuref(T <= 30, "T cannot exceed 30 on subtask 1");
    if (subtask == 2) ensuref(B == 1, "B is equal to 1 on subtask 2");
    
    inf.readEof();
}
