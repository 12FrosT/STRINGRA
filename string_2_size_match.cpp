#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    string a,b;
    cin >> a >> b;
    int ans = countMatching(a, b); // Calling the function
    cout << ans << endl;           // Printing the result
    return 0;
