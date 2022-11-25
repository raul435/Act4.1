#include <iostream>
#include <vector>
#include <algorithm>

#include "stdio.h"
#include "MyGraph.h"

using namespace std;

int main(){
    int tam;
    int num;
    vector<vector<int>> mat = {
      {0,1,0,0,0},
      {1,0,1,0,0},
      {0,1,0,1,1},
      {0,0,1,0,1},
      {0,0,0,1,0}};

    appGrafo grafo(mat);
    return 0;
}
  