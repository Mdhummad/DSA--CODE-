// GREEDY  
//==================================================================
//ASSIGN COOKIES


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        int l=0;
        int r=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(l<m && r<n){
            if(g[r]<=s[l]){
                r=r+1;
            }
            l=l+1;
        }
        return r;
    }
};

// ===================================================================
// lemonade change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5d=0;
        int d10d=0;
        int d20d=0;
        int n=bills.size();
        for(int i=0;i<n;i++){
            if(bills[i]==20){
                if(d5d >=1 && d10d >=1 ){
                    d10d--;
                    d5d--;
                    d20d++;
                }
                else if(d5d>=3)
                    {
                        d5d-=3;
                        d20d++;
                    }
                else{
                    return false;
                }    
                }
            
            else if(bills[i]==5){
                d5d++;
            }
            else if(bills[i]==10){
                if(d5d >=1){
                    d10d++;
                    d5d--;
                }
                else{
                    return false;
                }
            }

        }
    return true;
    }
};
// ======================================================================
//valid parenthesis

// do dp and recursion solution too
class Solution {
public:
    bool checkValidString(string s) {
        int min=0;
        int max=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
               min+=1;
               max+=1; 
            }
            else if(s[i]==')'){
               min-=1;
               max-=1; 
            }
            else{
                min-=1;
                max+=1;

            }
            if(min<0)min=0;
            if(max<0)return false;
        }
        if(min==0)return true;
        else return false;
    }
};

//==========================================================================================================
// fractional knapsack


#include<bits/stdc++.h>
using namespace std;

// Struct to represent an item with value and weight
struct Item {
    int value;
    int weight;
};

class Solution {
public:
    // Comparator function to sort items by value/weight ratio
    bool static comp(Item a, Item b) {
        double r1 = (double) a.value / (double) a.weight;
        double r2 = (double) b.value / (double) b.weight;
        return r1 > r2;  // Return true if the ratio of item a is greater than item b
    }

    // Function to calculate the maximum value we can get with fractional knapsack
    double fractionalKnapsack(int W, Item arr[], int n) {
        
        // Sort items based on the value/weight ratio
        sort(arr, arr + n, comp);

        int curWeight = 0;  // Current weight of knapsack
        double finalvalue = 0.0;  // Final value we can achieve

        // Iterate through the sorted items
        for (int i = 0; i < n; i++) {

            // If the current item can be fully added to the knapsack
            if (curWeight + arr[i].weight <= W) {
                curWeight += arr[i].weight;
                finalvalue += arr[i].value;  // Add the full value of the item
            } else {
                // If the current item can't be fully added, take the fractional part
                int remain = W - curWeight;
                finalvalue += (arr[i].value / (double) arr[i].weight) * (double) remain;
                break;  // Break as we have filled the knapsack
            }
        }

        return finalvalue;  // Return the maximum value that can be carried
    }
};

int main() {
    int n = 3, weight = 50;  // Number of items and capacity of knapsack
    // Item values and weights
    Item arr[n] = { {100,20},{60,10},{120,30} };
    Solution obj;

    // Calculate the maximum value we can get with the fractional knapsack
    double ans = obj.fractionalKnapsack(weight, arr, n);
    
    // Output the result
    cout << "The maximum value is " << setprecision(2) << fixed << ans;
    
    return 0;
}

//===================================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;              // amount
    cin >> n;

    vector<int> coins = {1, 2, 5, 10, 20, 50, 100}; // denominations
    int m = coins.size();

    int count = 0;

    while (n > 0) {
        for (int i = m - 1; i >= 0; i--) {
            if (coins[i] <= n) {
                n -= coins[i];
                count++;
                break;   // important
            }
        }
    }

    cout << count;
}

// ===================================================
