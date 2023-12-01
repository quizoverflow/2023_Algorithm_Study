#include<iostream>
#include<stack>
#include<queue>
#include<fstream>
#include<string>

using namespace std;
#define start 1

vector<bool> visited(101,false);
vector<vector<int>> graph(101);
int node_size;
int edge_size;
vector<int> order;

void DFS(){
    stack<int> st;
    st.push(start);
    visited[start] = true;
    while(!st.empty()){
        int now = st.top();
        st.pop();
        order.push_back(now);
        for(int i = 0; i < graph[now].size(); ++i){
            if(visited[graph[now][i]]) continue;
            else{
                st.push(graph[now][i]);
                visited[graph[now][i]] = true;
            }
        }
    }
    cout<< "== DFS Result == "<< endl;
    for(auto &i : order){
        cout<<i<<" ";
    }
    cout<<endl;
}

void BFS(){
    order.clear();
    for(int i = 0; i < visited.size(); ++i) visited[i] = false;

    queue<int> qu;
    qu.push(start);
    visited[start] = true;
    while(!qu.empty()){
        int now = qu.front();
        qu.pop();
        order.push_back(now);
        for(int i = 0; i < graph[now].size(); ++i){
            if(visited[graph[now][i]]) continue;
            else{
                qu.push(graph[now][i]);
                visited[graph[now][i]] = true;
            }
        }
    }

    cout<< "== BFS Result == "<< endl;
    for(auto &i : order){
        cout<<i<<" ";
    }
    cout<<endl;
}

void getGraph(){
    string str;
    ifstream file("graph.txt");
    getline(file,str);
    node_size = str[0] - '0';
    getline(file,str);
    edge_size = str[0] - '0';
    while (getline(file, str)){
        int a = str[0] - '0';
        int b = str[2] - '0';
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
}

int main(){
    getGraph();
    DFS();
    BFS();

    return 0;
}

