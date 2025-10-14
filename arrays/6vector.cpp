// ways to initialize vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr; // you dont need to mention size of vector
    // for inserting/input do not use [].you can use it but dont do it
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(8);
    // arr.push_back(9);
    // arr.push_back(87);
    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " ";
    cout << arr[3] << " ";
    cout << arr[4] << " ";
    /*at 3 index  after compiling the value is 0 but at 4 index it gives a garbage value
    this helps you understand the concept of vector==*/
    cout << endl;
    cout << endl;
    cout << endl;
    // ====================================================================================================================================
    // if you want to update/access.you can use square barcket[]
    arr[0] = 88;
    arr[1] = 65;
    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " ";
    cout << arr[3] << " ";
    cout << arr[4] << " ";
    // ====================================================================================================================================

    return 0;
}
