#pragma once

#include <vector>
#include <utility>
#include <queue>
#include <iostream>
#include <climits>
#include <cmath>
#include <cfloat>

using std::vector;
using std::pair;
using std::priority_queue;
using std::cout;
using std::endl;

struct Node {
    short x, y;
    float gcost = 0;
    float fcost = 0;
    vector<pair<short, short>> path;
};

struct NodeComparison {
    bool operator()(const Node& a, const Node& b) const {
        return a.fcost > b.fcost;
    }
};

class Pathfinding {
public:
    int screenbuffer = 0;

    vector<pair<short int, short int>> getneighbors(pair<short int, short int> node, vector<vector<short int>>* grid);
    void pathfind(pair<short int, short int> end, pair<short int, short int> pos, vector<vector<short int>>* grid, vector<pair<short int, short int>>* path);
};
