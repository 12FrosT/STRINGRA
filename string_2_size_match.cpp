#include<bits/stdc++.h>
using namespace std;

int countMatching(string a, string b) {  // Function to find the number of matching sub-strings
    int c = 0; // Initialized the counter by 0

    for (int i = 0; i < a.length() - 1; i++) {  // Loop for string a

        for (int j = 0; j < b.length() - 1; j++) {  // Loop for string b
            string aSubString = a.substr(i, 2);    // Finding substring of a for matching
            string bSubString = b.substr(j, 2);    // Finding the substring of b for matching
            if (aSubString == bSubString) {
                c++;                               // If matching then increase the counter by 1
            }
        }
    }
    return c;  // Returning the answer
}

int main()
{
    /*
        Here we are taking string a and string b as input, you can also replace it with the initialized strings.
    */
    string a,b;
    cin >> a >> b;
    int ans = countMatching(a, b); // Calling the function
    cout << ans << endl;           // Printing the result
    return 0;
}
/*
Sample Input/Output:

Input:
xxcaazz
xxbaaz

Output:
3
*/
