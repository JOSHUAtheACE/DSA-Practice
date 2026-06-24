#include<iostream>
#include<vector>
#include<string>
using namespace std;
void paranthesis(int n,int left,int right,vector<string> &ans,string &temp) {
    if (right<left){
        //right
        temp.push_back(')');
        paranthesis(n,left,right+1,ans,temp);
        temp.pop_back();
    }
    if (left<n) {
        //left
        temp.push_back('(');
        paranthesis(n,left+1,right,ans,temp);
        temp.pop_back();
    }
    if (right==n) {
        ans.push_back(temp);
        return;
    }
}
int main() {
    vector<string> ans;
    string temp;
    paranthesis(3,0,0,ans,temp);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
}