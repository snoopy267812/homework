﻿#include <iostream>  
#include <math.h>  
using namespace std;
int main() {
    int n = 0;
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        if (i % 3 == 0) { ans += i; }
    }
    cout << ans << '\n';
    return 0;
}