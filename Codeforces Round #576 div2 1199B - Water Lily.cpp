// Round #576 div2: 1199B - Water Lily
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    double H, L;
    cin >> H >> L;
    if(H<1 || H>10E5 || L<1 || L>10E5)
    	return 0;
    double height = (pow(L,2) - pow(H,2))/(2*H);
    cout << fixed << setprecision(13) << height;
    return 0;
}

/*
x = height = ?
x^2 + L^2 = (x+H)^2
x^2 + L^2 = x^2 + 2xH + H^2
x = (L^2 - H^2)/(2H)
*/
