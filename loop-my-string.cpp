/* strings.cpp
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // s to store a string
    string s;

    // cin (user input) to s
    getline(cin, s);

    // print s
    // cout << s << endl;

    for(int x = 0; x < s.length(); x++) {
        cout << s.at(x) << endl;
    }
}
