#include <iostream>
using namespace std;
int main() {
    vector<int> v;         
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    for (int x : v) cout << x << ' ';
    cout << '\n';
    cout << v[1] << '\n';         
    cout << v.at(2) << '\n';      
    cout << "size=" << v.size() << " cap=" << v.capacity() << '\n';

    return 0;
}
