/* Sum8.cpp | Sat, Mar 20, 2017 | Roman S. Collins

   A linear search algorithm in C++

   https://www.youtube.com/watch?v=XKu_SEDAykw&spfreload=10

*/
#include <vector>
using namespace std;

const comp = {}

bool haspair(const Vector<int> data, int sum) {
    // Unordered set of compliments
    unordered_set<int> comp;

    for (int value : data) {
        // Before adding to comp
        // check if the value has
        // already been added to
        // the set
        if (comp.find(value) != comp.end)
            return true;
        comp.add(sum - value)
    }

    return false;
}

void main() {
    int sum = 8;

    return 0;
}
