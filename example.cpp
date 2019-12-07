#include <iostream>
#include <vector>
#include <queue>
#define INF 99999
#define MAX_NODE 500
 
using namespace std;
 
//Implement C++ during my semester assignment


typedef struct EDGE {
    int dest;
    int val;
};
 
// Zero index is discarded.
vector<EDGE> edge_vec[MAX_NODE];
int value_arr[MAX_NODE] = { 0 };
int N, M;
 
int bellman_ford(int excute_num) {
    int isChanged = 0;
// perform the Bellman Ford algorithm. 
    // check the EDGE connected in all VERTEXs.
    // i is the starting point edge_sec[i][k].dest is end point
    // do it once for each node.
    for (int t = 1; t <= N; t++) {
        // For every edge on each node
        for (int i = 1; i <= N; i++) {
            for (int k = 0; k < edge_vec[i].size(); k++) {
                // The weight of the node to the current destination is obtained, and the weight of the node from the starting node to the destination respectively.
                int new_val = (value_arr[i] + edge_vec[i][k].val);
                int before_val = (value_arr[edge_vec[i][k].dest]);
                // If the node value is greater than the current value, renew it.
                if ((value_arr[i] != INF) && (new_val < before_val)) {
                    isChanged = 1;
                    // Exit the function immediately after the second performance.
                    if (isChanged * excute_num) return isChanged;
                    value_arr[edge_vec[i][k].dest] = new_val;
                }
            }
        }
    }
 
    return isChanged;
}
 
int main() {
    cin >> N >> M;
    // EDGE Input
    int from, to, val;
    for (int i = 0; i < M; i++) {
        scanf("%d %d %d", &from, &to, &val );
        edge_vec[from].push_back(EDGE{to, val}); 
    }
    // Initialize initial reachable time to INF
    for (int i = 2; i <= N; i++) value_arr[i] = INF;
    bellman_ford(0); // Excuting bellman ford
    // perform twice, if there is a change in value, then 1 is returned from the function.
    if (bellman_ford(1) == 1){
        cout << -1;
    }
    // If the function return value is 0, the value is output immediately, since there is no change.
    else {
        for (int i = 2; i <= N; i++)
            printf("%d\n", (value_arr[i]!=INF ? value_arr[i] : -1) );
    }
    return 0;
}