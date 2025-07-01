// Vector
#include <bits/stdc++.h>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        cout<<v.at(i)<<" "; // This is same as above and have same funtionality
    }
    cout << endl;
}
int main()
{
    // Vector initialization and push and pop operation
    vector<int> V1; // zero length integer vector
    int element, size;
    cout << "Enter the size of your vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        V1.push_back(element);
    }
    V1.pop_back();
    display(V1);

    // Iteration operation on vector
    vector<int>::iterator iter = V1.begin();
    V1.insert(iter, 5, 566); // (iter + postion(default = 0), no. of times, no. to insert)
    display(V1);

    vector<char> V2(4); // 4-element character vector
    V2.push_back('a');
    display(V2);
    vector<char> V3(V2); // 4-element character vector from vec2
    display(V3);
    vector<int> V4(6, 3); // 6-element vector of 3s
    display(V4);
    return 0;
}