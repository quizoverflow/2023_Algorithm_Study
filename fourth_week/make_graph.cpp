#include<iostream>
#include<vector>
using namespace std;

int main(){
    int computer;
    int n;
    cin >> computer;
    cin >> n;

    vector<vector<int>> graph(computer+1);
    // 입력과 동시에 그래프 만들기 수행
    int e1, e2; // 편의상 a, b로 변수 설정해도 무방
    for(int i = 0; i < n; ++i){
        cin >> e1 >> e2;

        //무향이므로 꼭! graph[e1]에 e2를 넣고, graph[e2]에도 e1을 넣어준다.
        //유향이라면 한 쪽에만 넣어 주면 된다.

        graph[e1].push_back(e2);
        graph[e2].push_back(e1);
    }

}