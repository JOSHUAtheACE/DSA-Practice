#include<iostream>
#include<vector>
using namespace std;
void subsequence(int arr[],int index,int n,vector<int> temp,vector<vector<int>> &ans) {
    if (index==n) {
        ans.push_back(temp);
        return;
    }
    subsequence(arr,index+1,n,temp,ans); //NO
    temp.push_back(arr[index]);        //Yes
    subsequence(arr,index+1,n,temp,ans);   //Yes
}
int main() {
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> temp;
    vector<vector<int>> ans;
    subsequence(arr,0,3,temp,ans);
    for (int i=0;i<ans.size();i++) {
        for (int j=0;j<ans[i].size();j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

// wonderful use of pass by reference and pass by value , Each recursive call gets its own temp and values are added accordingly..
