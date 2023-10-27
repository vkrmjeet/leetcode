#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        int first_h = -1;
        int second_h = -1;
        for(auto c:s){
            if(!isdigit(c)) continue;
            else{
                cout<<c<<endl;
                if(c>first_h){
                    second_h = first_h;
                    first_h = c;
                }else if(c<first_h && c>second_h){
                    second_h = c;
                }
            }
        }
        return second_h != -1 ? second_h-'0' : -1;
    }
};



int main(){
    Solution sol = Solution();

    int result = sol.secondHighest("ck077");
    cout<<result<<endl;

    return 0;
}