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

 

 

 

 
    	
 
