
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    cout << v3[4];

    cout << endl;

    // syntax
    //   IN TWO D VECTOR WE CAN PUSH BACK VECTOR INSIDE VECTOR
    //   // [1.]====>
    vector<vector<int>> v; // VECTOR V KUCH AISA BAN GYA HAI   ==>>   v={{1,2,3},{4,5},{6,7,8,9,10}};
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // [2.]====>
    vector<vector<int>> u(4); // 4 represent the size of vector,,mtlb it will have 4 vector
    // [3.]====>
    // BELOW GIVEN SYNTAX IS SIMILAR TO int arr[3][4]
    vector<vector<int>> q(3, vector<int>(4));
    //[4.]====> HAR VECTOR HAS 2 AS A VALUE
    vector<vector<int>> vv(4, vector<int>(4, 2));
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << v.size() << " no. of rows " << endl;
    cout << vv[0].size() << " no. of columns " << endl;

    // PRINTING IN 2-D VECTORS
    cout << v[0][2];
    cout << endl;
    cout << v[0][3]; //===> HERE WE EILL GET 0 AS ANS
    return 0;
}