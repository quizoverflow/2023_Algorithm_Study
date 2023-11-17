#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string s;
    int cnt = 1; // 정답 번호
    while(1){
        cin >> s;
        if(s[0] == '-') return 0; // 끝 입력 확인
        int ans = 0; // 정답 초기화
        stack<int> st; // 열은 괄호를 담아줄 스택 선언
        // 0:{   1: }
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '{') st.push(0); // 열은 괄호면 스택
            else{ // 아니라면,
                if(st.empty()){ // 스택이 비어있을 때는 무조건 열은괄호로 바꿔줘야 함
                    ans++; 
                    st.push(0); // 열은 괄호로 바뀌었을 테므로 스택
                }
                else{
                    st.pop(); // 닫아줄 열은 괄호가 있다는 뜻이므로 팝
                }
            }
        }
        ans += (st.size()/2); // 남은 스택에 보관된 열은 괄호들은 서로 짝을 지어 주면 되므로 2로 나누어 정답에 더하기
        cout<<cnt++<<". "<<ans<<"\n";
    }

    return 0;
}