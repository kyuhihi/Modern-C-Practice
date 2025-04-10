#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

//int main() {
//    int x (10), y(3);
//    auto divide = [](int a, int b) -> double {
//        return static_cast<double>(a) / b;
//        };
//    cout << divide(x, y) << endl;;//3.333
//}

#include <iostream>
#include <algorithm>

int main() {
    list<int> v = { 1, 2, 3, 4, 5 };

    for_each(v.begin(), v.end(), [](int x) {
        std::cout << x * x << " ";
        });
    // Ãâ·Â: 1 4 9 16 25
}