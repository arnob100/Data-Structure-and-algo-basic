#include <iostream>
#include <map>
#include <unordered_map> // Include the unordered_map header
using namespace std;
int main()
{
    map<int, int> m;
    m[1] = 10;
    m[2] = 20;
    m[3] = 30;
    cout << "Contents of the map:" << endl;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    unordered_map<int, int> um;

    // Insert key-value pairs into the unordered_map
    um[1] = 10;
    um[2] = 20;
    um[3] = 30;
    // Iterate over the unordered_map and print key-value pairs
    cout << "Contents of the unordered_map:" << endl;
    for (auto it = um.begin(); it != um.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
