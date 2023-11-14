#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> v;
    int tmp;
    for(int i = 0; i < 7; ++i){
        cin >> tmp;
        v.push_back(tmp);
    }

    int sum = 0;

    vector<int> odd;
    for(int i = 0; i < v.size(); ++i){
        if(v[i] % 2 == 1){
            sum += v[i];
            odd.push_back(v[i]);
        }
    }

    cout<<sum<<"\n";
    cout<<min_element(odd.begin(),odd.end()) - odd.begin();


    cout<<"hi"<<endl;

    cout<<"hi\n";

    

    return 0;
}