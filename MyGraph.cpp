#include <iostream>
#include <vector>
#include <algorithm>
#include "MyGraph.h"

using namespace std;

appGrafo::appGrafo(vector<vector<int>> matriz){
appGrafo::loadGraph(matriz);
}

void appGrafo::loadGraph(vector<vector<int>> matriz){
  cout<<"qwe";
  for(int i=0;i=matriz.size();i++){
    for(int j=0;j=matriz.size();j++){
      cout<<matriz[i][j]<<" ";
    }
    cout<<endl;
  }
}