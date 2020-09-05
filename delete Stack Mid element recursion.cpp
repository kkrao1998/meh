//well the basic idea here is that i remove an element from the top of the stack and go on till i the size is same as half of n
//and then pop that element and push back the temp variable and move on with your life


#include <bits/stdc++.h>

using namespace std;

void delmid(vector<int> &a,int n){
    if(a.size() == n/2 + 1){
        a.pop_back();
        return ;
    }

    
    
    //cout<<"DelMid"<<endl;
    
    
    int last = a[a.size()-1];
    a.pop_back();
    delmid(a,n);
    a.push_back(last);
}


int main() {
    vector<int> a = {5,8,9,4,2,1,6};
    int n = a.size();
    delmid(a,n);
    
    
    cout<<"\n\n After sort \n";
    for(int i : a)
    {
        cout<<i<<" ";
    }
}