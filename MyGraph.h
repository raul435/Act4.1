#include <iostream>
#include <string>
#include <cmath>
#include <vector>

#ifndef MYGRAPH_H
#define MYGRAPH_H

using namespace std;

class appGrafo{
    private:
        vector<vector<int>> matriz;
    public:
        appGrafo(vector<vector<int>> matriz);
        void loadGraph(vector<vector<int>> matriz);

};

#endif