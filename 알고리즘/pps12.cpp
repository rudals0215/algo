/*
'******************************************************************************
' 파일명    : pps12.cpp
' 작성자    : 차경민
' 목적      : Problem Solving
' 날짜      : 2020/07/16
' 문제      : 숫자의 총 개수(large)
'
' 문제 설명 : 자연수 N이 이벽되면 1부터 N까지의 자연수를 종이에 적을 때 각 숫자는 몇개 쓰였을지
'            
' 출력 설명 : 첫 번째 줄에 숫자의 총개수를 출력한다
'              15 => 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1,1, 1,2, 1,3, 1,4, 1,5 =>21
'예제   15
'    => 21
'******************************************************************************
*/
#include <iostream>
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
	int n, sum=0, cnt=1, digit=9, res=0;
	cin >> n;
	while(sum+digit<n){	
		sum=sum+digit;
		res=res+(cnt*digit);
		cnt++;
		digit=digit*10;
	}
	res=res+((n-sum)*cnt);
	cout << res << endl;
	return 0;
}