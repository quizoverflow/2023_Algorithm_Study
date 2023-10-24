#include<iostream>
#include<vector> // vector
#include<algorithm> //sort
using namespace std;

int main(){
    //비어있는 벡터 선언
    vector<int> v1;
    for(int i = 0; i < 3; ++i){
        int tmp;
        cin >> tmp;
        v1.push_back(tmp);
    }
    sort(v1.begin(),v1.end());

    cout<<"sorted v1 result"<<endl;
    for(int i = 0; i< 3; ++i){
        cout<<v1[i] <<" ";
    }
    cout<<endl;

    //할당된 벡터 선언
    double num_to_init = 3.0; // float은 쓰지 맙시다.
    int vector_size = 3;
    vector<double> v2(num_to_init,vector_size);
    cout<<"v2 result"<<endl;
    for(auto &i : v2) cout << i << " ";
    cout<<endl;

    //2x3 2차원 벡터 선언
    vector<vector<int>> v3(2,vector<int>(3));
    cout<<"row size = "<<v3.size() <<" column size = "<<v3[0].size();
    
    return 0;
}