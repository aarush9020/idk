#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long rate;
    cin >> rate;

    long long tempcondenser;
    cin >> tempcondenser;

    long long ts;
    long long th;
    cin >> ts >> th;

    long long power;

    power = rate * ((tempcondenser / th) - (tempcondenser / ts));

    int efficiency;
    int hours;

    long long cost;

    long long costop = power * hours * efficiency * cost;

    long long capitalcost;
    long long costperarea;
    int annualizationfactor;

    long long U;

    long long diff = (th - ts);

    capitalcost = (costperarea * rate * annualizationfactor) / (U * diff);

    long long function = capitalcost + costop;
}
