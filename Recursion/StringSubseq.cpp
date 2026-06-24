#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subseq(string s,int index,int n,vector<char> &temp,vector<vector<char>> &ans) {
    if (index==n) {
        ans.push_back(temp);
        return;
    }
    subseq(s,index+1,n,temp,ans);//no
    temp.push_back(s[index]);//yes
    subseq(s,index+1,n,temp,ans);
    temp.pop_back();

}
int main() {
    string s="abc";
    vector<char> temp;
    vector<vector<char>> ans;
    subseq(s,0,s.size(),temp,ans);
    for (int i=0;i<ans.size();i++) {
        for (int j=0;j<ans[i].size();j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
