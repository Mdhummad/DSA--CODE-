leetcode 1689

class Solution {
public:
    int minPartitions(string n) {
        int len = n.size();
        int count = 0;

        while (true) {
            bool allZero = true;

            for (int i = 0; i < len; i++) {
                if (n[i] > '0') {
                    n[i]--;        // subtract 1
                    allZero = false;
                }
            }

            if (allZero) break;   // stop when number becomes all 0s
            count++;              // one deci-binary number used
        }

        return count;
    }
};


// or

ass Solution {
public:
    int minPartitions(string n) {
        char max_ele=*max_element(n.begin(),n.end());
        return max_ele-'0';
    }
};