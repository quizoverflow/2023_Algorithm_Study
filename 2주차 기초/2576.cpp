#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;    // 입력 받는 자연수 변수
    int sum = 0; // 합 변수 초기화 (0으로 초기화 중요! PS 초반에 잦은 실수 중 하나)
    vector<int> odd; // 홀수 변수만 담을 벡터 선언
    for(int i = 0 ; i < 7; ++i){
        cin >> num;   //cin 으로 num 입력 받기; 꺾새 방향에 주의
        if(num % 2){ // num%2 가 1일때는 조건문 실행 (0 제외한 값은 모두 true로 받아들인다)
            odd.push_back(num); //벡터 끝에 삽입
            sum += num; // 홀수 합 증가
        }    
    }
    if(!sum) cout<<-1; // 홀수가 없는 경우 0이므로 
    else cout<<sum<<"\n"<<*min_element(odd.begin(),odd.end());

    /*
    *min_element(벡터 시작 주소iterator, 끝 주소iterator)
    
    min_element 와 *min_element는 다르다. 전자는 주소를 반환하며, 후자는 역참조된 최솟값을 반환한다.
    
    int index_of_min = min_element() - odd.begin(); 
    윗줄 처럼 주소를 반환하는 특징으로 최솟값의 인덱스 또한 알아낼 수 있다.

    */

    return 0;
}