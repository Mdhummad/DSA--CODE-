/* STRING ARE BASICALLY CHARACTER ARRAY*/
/*MOST IMPORTANT THING ABOUT STRING IS THAT THERE IS A '\0' PRESENT AT THE END OF A STRING*/

#include <iostream>
using namespace std;
int main()
{
    // char str[5]={'a','b','c','d','e'};
    // for(int i=0;i<5;i++){
    //     cout<<str[i]<<" ";
    // }

    // PRINTING A STRING
    // char st[5]="abcd";
    // for(int i=0;i<5;i++){
    //     cout<<st[i]<<" ";
    // }


    // ASCII VALUE OF \0
    char ch = '\0';
    cout << ch;
    cout << (int)ch;

    //  char str[5]={'a','b','c','d','e'};
    //  for(int i=0;str[i]!='\0';i++){ 
    //      cout<<str[i]<<" ";
    //  }

    // '\0'==>THE MAGIC OF BACKSLASH ZERO
    char str[5] = {'a', 'b', '\0', 'c', 'd'};
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i] << " ";
    }

    return 0;
}