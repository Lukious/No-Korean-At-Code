# No-Korean-At-Code
NKAC Project
Translate or Remove Korean At code file

Support file : .txt / .cpp / .c / .html / .css 

# How to use?
### install google translate library
```
pip install googletrans
```
### Run file
```
KoreanToEnglishCode.py
Input file name:[code file name in code dir]
```
```
NoKoreanAtCode.py
Input file name:[code file name in code dir]
```

# Output example
### Input .cpp file
```
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
```

### Output .cpp file [Korean remoeved]
```
#include <iostream> 
#include <vector >   
#include <queue>    
#define INF 99999    //INF 
#define MAX_NODE 
 
 
using namespace std;	
 
typedef struct EDGE { 
    int 
    int val;  
};
 
vector<EDGE> edge_vec[MAX_NODE]; 
int value_arr[MAX_NODE] = { 0 }; 	// 
int N, 
 
 
int bellman_ford(int excute_num) 
    int isChanged = 0;
 
    for (int t = 1; t <= N; t++) { 
```

### Output .cpp file [Korean Translated]
```
#include <iostream> // add library
#include <vector >   // add library
#include <queue>    // add library
#define INF 99999    //INF Value Definition
#define MAX_NODE 500 // node length limit
 
 
using namespace std;	
 
// Hangul comments are lots of code
typedef struct EDGE { // struct declaration
    int dest; // integer variable
    int val;  // integer variable
};
// Hangul comments more
vector<EDGE> edge_vec[MAX_NODE]; // to translate even a single line
int value_arr[MAX_NODE] = { 0 }; 	// amazing!
int N, M; // integer variable
int bellman_ford(int excute_num) {// Bellman-Ford algorithm
    int isChanged = 0;
 
    for (int t = 1; t <= N; t++) { // loop Hooray!
```


# Version Info
## 1.2 (20191209build)
### Implemeted
Delete Korean at Code
Let Remain Tab levels
Auto Translate 

### Working
Let possible to edit .py format file (Now only possible for .c and .cpp format file)

Not support .py yet

### TODO
Multi file translating (To target dir) 
