#include <bits/stdc++.h>

using namespace std;

void insert(vector<int> &a,int val)
{
    if(a.size() == 0|| a.back()<=val)
    {
        a.push_back(val);
        return;
    }
    
    cout<<"INSERT "<<endl;
   
    int temp =a[a.size()-1];
    a.pop_back();
        
    insert(a,val);
    
    a.push_back(temp);
    
      
}

void sort(vector<int> &a){
    if(a.size() == 1)
    return ;
    
    cout<<"SORT"<<endl;
    
    int last = a[a.size()-1];
    a.pop_back();
    sort(a);
    insert(a,last);
}


int main() {
    vector<int> a = {5,8,9,4,2,1};
    
    sort(a);
        
    cout<<"\n\n After sort \n";
    for(int i : a)
    {
        cout<<i<<" ";
    }
}