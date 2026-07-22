#include<iostream>
using namespace std;
#include<vector>
void binary(vector<string> &ans,int one,int zero,int n,string &temp) {
    if (temp.size()==n) {
        ans.push_back(temp);
        return;
    }
    //take one
    temp.push_back('1');
    binary(ans,one+1,zero,n,temp);
    temp.pop_back();
    //take zero
    if (one>zero) {
        temp.push_back('0');
        binary(ans,one,zero+1,n,temp);
        temp.pop_back();
    }
}
int main() {
    vector<string> ans;
    string temp;
    binary(ans,0,0,3,temp);
    for (int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
}