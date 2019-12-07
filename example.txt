#include <iostream> //라이브러리 추가
#include <vector >   //라이브러리 추가
#include <queue>    //라이브러리 추가
#define INF 99999    //INF 값 정의
#define MAX_NODE 500	//노드 길이 제한
 
using namespace std;	
//한글주석이 많은 코드

typedef struct EDGE { //구조체 선언
    int dest;	//정수변수
    int val;  	//정수변수
};
 
//한글주석 많아
vector<EDGE> edge_vec[MAX_NODE]; //한줄에 있어도 번역
int value_arr[MAX_NODE] = { 0 }; 	// 대단해!
int N, M;	//정수변수
 
int bellman_ford(int excute_num) {	//벨만포드알고리즘
    int isChanged = 0;
    for (int t = 1; t <= N; t++) { //반복문만세!
