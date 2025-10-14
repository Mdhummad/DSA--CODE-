#include <bits/stdc++.h>
using namespace std;

// pairs
void explain_pairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.second << endl;

    pair<int, int> arr[3] = {{1, 2}, {3, 6}, {9, 7}};
    cout << arr[0].first;
}

void explain_vectors()
{
    vector<int> v;
    // the size of vector can be increased dynamically
    v.push_back(1);
    v.emplace_back(2); // implace_back is faster than push_back

    vector<pair<int, int>> vs;

    // ITERATOR
    //  it points to the element's memeory
    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << "  ";

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it : v)
    {
        cout << it << " ";
    }

    // INSERT ,ERASE ,EMPTY
}

void explain_list()
{
    // for a list a doubly linked list is maintained
    // while a vector is maintained by a singly linked list
    // so it is costly to insert in a vector rather than to insert in a list

    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    ls.emplace_front(2);
}

void explain_pq()
{
    priority_queue<int> pq;
    //    by default  it have greatest element at top
    // it is max heap

    priority_queue<int, vector<int>, greater<int>> pq;
    // this is min-heap
    // it will have 2 at the top
}
// ==========================================================================================
void explain_set()
{
    // set store element in unique and sorted way
    set<int> st;
}

void explain_unordered_set()
{
    unordered_set<int> ust;
}

#include <iostream>
#include <set>
using namespace std;

int main() {
    // Declare a set of integers
    set<int> s;

    // Insert elements
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(5); // duplicate, will be ignored

    // Print elements (automatically sorted)
    cout << "Set elements: ";
    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Check membership
    if (s.find(3) != s.end())
        cout << "3 is present in the set" << endl;

    // Erase an element
    s.erase(1);

    cout << "After erasing 1: ";
    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Size of set
    cout << "Size of set: " << s.size() << endl;

    return 0;
}


//==============================================================================================================
// MAP
/*
A map is a data structure that stores elements in key-value pairs IN A SORTED MANNER.
SO BASICALLY FIRST ELEMENT IS KEY AND SECOND IS VALUE
key (unique identifier) and a value (data associated with the key).
Keys are unique — no two elements can have the same key.

map<int, string> m;  // key = int, value = string

m[1] = "Apple";     // insert key=1, value="Apple"
m[2] = "Banana";    // insert key=2, value="Banana"
m.insert({3, "Mango"});  // alternative way

cout << m[1];   // Output: Apple

SEARCHING A KEY

if (m.find(2) != m.end())
    cout << "Found " << m[2];
else
    cout << "Not Found";

TRAVERSING A ELEMENT
for (auto it : m) {
    cout << it.first << " -> " << it.second << endl;
}


ERASE A ELEMENT
m.erase(2);  // removes key=2





map → Keys stored in sorted order (Red-Black Tree). O(log n) operations.

unordered_map → Uses hashing internally, so average O(1) operations, but keys are not sorted.

multimap → Allows multiple elements with the same key.

*/
void explain_map()
{
    // store key value pair
    //  it also store unnique  key in sorted order
    map<int, int> mp1;
    mp1[1] = 2;
    mp1.insert({3, 1});

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mp3;
    mp3[{2, 3}] = 10;
}

//===============================================================================================

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    if (p1.first > p2.first)
        return true;
    return false;
}

void explain_extra()
{
    // sort(v.begin(),v.end());==>sort in ascending order
    // sort(v.begin(),v.end(),greater<int>)==> sort in dexcending order

    // SPECIAL WAY OF SORTING

    // GIVEN A PAIR SORT IT ACCORDING TO SECOND ELEMENTS
    // IF SECOND ELEMENT IS SAME, THEN SORT IT ACCORDING TO FIRST ELEMENT BUT IN DECENDING ORDER
    // pair<int,int> pt[]= {{1,2},{2,1},{4,1}};

    // sort(pt,pt+n,comp)
}

int main()
{
    cout << "by using #include<bits/stdc++.h we can include all the librraries >";
}
