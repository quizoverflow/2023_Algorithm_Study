#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string s;
    int cnt = 1;
    while(1){
        cin >> s;
        if(s[0] == '-') return 0;
        int ans = 0;
        stack<int> st;
        // 0:{   1: }
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '{') st.push(0);
            else{
                if(st.empty()){
                    ans++;
                    st.push(0);
                }
                else{
                    st.pop();
                }
            }
        }
        ans += (st.size()/2);
        cout<<cnt++<<". "<<ans<<"\n";
    }

    return 0;
}