#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int Nodes;
    int n;
    cin >> Nodes;
    cin >> n;

    vector<vector<pair<int,int>>> graph(Nodes+1);
    int e1, e2, cost;
    pair<int,int> info; // first 는 연결된 노드 번호, second는 가중치 (순서는 자유)
    for(int i = 0; i < n; ++i){
        cin >> e1 >> e2 >> cost;
        info.first = e2;
        info.second = cost;
        graph[e1].push_back(info);

        info.first = e1;
        graph[e2].push_back({e1,cost});

        /*
        단순히 {}를 이용해도 되지만, emplace_back을 쓴다면 make_pair(e1,cost)을 써야한다.
        ex)
        graph[e2].emplace_back(make_pair(e1,cost));
        */

    }

}