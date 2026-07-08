#include<iostream>
using namespace std;
void toh(int n,int src,int hlp,int dst) {
    if (n==1) {
        cout<<"moved disc "<<n<<" from "<<src<<" to "<<dst<<endl;
        return;
    }
    toh(n-1,src,dst,hlp); // first move n-1 tower
    cout<<"moved disc "<<n<<" from "<<src<<" to "<<dst<<endl; // mark movement of base disc
    toh(n-1,hlp,src,dst); // put n-1 tower back on base

}

int main() {
    toh(3,1,2,3);
}