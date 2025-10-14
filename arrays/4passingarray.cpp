//   PASSING ARRAY TO FUNCTIONS

/* in one-d array we do not need to determine size of a array while passing it
 to a function*/
// #include<iostream>
// using namespace std;
// void display(int b[]){
//     for(int i=0;i<=4;i++){
//         cout<<b[i]<<"  ";
//     }
//     return;
// }
// int main(){
// int arr[5]={2,3,4,2,4};
// display(arr);

//     return 0;
// }

// ================================================================================================================

/*
1.Elements are passed by reference in array
2.cout<<&arr;
  cout<<&arr[0]
  cout<<arr
  ========>>> all are same and points to adress of first element of a array
3. a[]   and b[] are pointer
4.  we usually send size of array to function because we can not determine size of array in function
   because in function array is treated as pointer and sizeof operator will not work on pointer


*/

#include <iostream>
using namespace std;
void dispaly(int b[], int size)
{
    // int size= sizeof(b)/sizeof(b[0]);===> This will not work because b is a pointer
    // it is only used to acess and update the elemnet of array

    for (int i = 0; i <= size - 1; i++)
    {
        cout << b[i] << " ";
    }
    return;
}
void change(int a[], int size)
{
    a[0] = 688;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    dispaly(arr, size);
    // dispaly(arr[],6);=====>this is wrong see first lecture

    change(arr, size);
    dispaly(arr, size);

    return 0;
}

/*========================================================================================*/
/*using pointer for accesing array in function*/
#include <iostream>
using namespace std;
void dispaly(int *ptr1, int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << ptr1[i] << " ";
    }
    return;
}
void change(int *ptr2, int size)
{
    ptr2[0] = 688;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *pointer = arr;      // pointer to first element of array
    cout << pointer << endl; // prints address of first element
    cout << &arr[0] << endl; // prints address of first element

    cout << pointer[0] << endl; // prints value of first element
    cout << *pointer << endl;   // prints value of first element

    dispaly(arr, size);

    change(arr, size);
    dispaly(arr, size);

    return 0;
}