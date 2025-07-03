// Lists
#include <bits/stdc++.h>
using namespace std;

template <class T>
void display(list<T> &L)
{
    list<int>::iterator iter1;
    for (iter1 = L.begin(); iter1 != L.end(); iter1++)
    {
        cout << *iter1 << " ";
    }
}

// Creation of a list 
int main()
{
    list<int> L1;  //empty list of 0 length
    L1.push_back(5);
    L1.push_back(3);
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(4);
    cout<<"Displaying L1: ";
    display(L1);
    cout<<endl;
    return 0;
}
// Deleting last element
int main()
{
    list<int> L1;  //empty list of 0 length
    L1.push_back(5);
    L1.push_back(3);
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(4);
    cout<<"Displaying L1: ";
    display(L1);
    cout<<endl;
    L1.pop_back();
    cout<<"Deleting last element: ";
    display(L1);
    cout<<endl;
    return 0;
}
// Deleteing first element
int main()
{
    list<int> L1;  //empty list of 0 length
    L1.push_back(5);
    L1.push_back(3);
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(4);
    cout<<"Displaying L1: ";
    display(L1);
    cout<<endl;
    L1.pop_front();
    cout<<"Deleting first element: ";
    display(L1);
    cout<<endl;
    return 0;
}
// Removing any element from the list
int main()
{
    list<int> L1;  //empty list of 0 length
    L1.push_back(5);
    L1.push_back(3);
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(4);
    cout<<"Displaying L1: ";
    display(L1);
    cout<<endl;
    L1.remove(1); // Removing any element from middle
    cout<<"Removing element 1: ";
    display(L1);
    cout<<endl;
    return 0;
}
// Sorting the list
int main()
{
    list<int> L1;  //empty list of 0 length
    L1.push_back(5);
    L1.push_back(3);
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(4);
    cout<<"Displaying L1: ";
    display(L1);
    cout<<endl;
    L1.sort(); // Sorting in the list
    cout<<"Displaying sorted L1: ";
    display(L1);
    cout<<endl;
    return 0;
}
// Merging two lists
int main()
{
    list<int> L1;  //empty list of 0 length
    L1.push_back(5);
    L1.push_back(3);
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(4);
    cout<<"Displaying L1: ";
    display(L1);
    cout<<endl;

    list<int> L2(3);  //empty list of length 3
    list<int> :: iterator iter2 = L2.begin();
    *iter2 = 8;
    iter2++;
    *iter2 = 6;
    iter2++;
    *iter2 = 7;
    iter2++;
    cout<<"Displaying L2: ";
    display(L2);
    cout<<endl;
    L1.sort();
    L2.sort();
    L1.merge(L2); //Merging 2 lists
    cout<<"List 1 after merging and sorting: ";
    display(L1); 
    return 0;
}