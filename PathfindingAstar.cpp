#include "PathfindingAStar.h"

std::vector<std::pair<short, short>> directions = { {-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, 1}, {-1, -1}, {1, -1}, {1, 1} };

float heuristic(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

vector<pair<short int, short int>> Pathfinding::getneighbors(pair<short int, short int> node, vector<vector<short int>>* grid)
{
    vector<pair<short int, short int>> neighbors;

    for (const auto& i : directions)
    {
        if (node.first + i.first < screenbuffer || (node.first + i.first) >= (*grid)[0].size() + screenbuffer) continue;
        if (node.second + i.second < screenbuffer || (node.second + i.second) >= grid->size() + screenbuffer) continue;

        if ((*grid)[node.second + i.second - screenbuffer][node.first + i.first - screenbuffer] != -1)
        {
            neighbors.push_back({ node.first + i.first ,node.second + i.second });
        }
    }

    return neighbors;
}

void Pathfinding::pathfind(pair<short int, short int> end, pair<short int, short int> pos, vector<vector<short int>>* grid, vector<pair<short int, short int>>* path)
{
    int rows = grid->size();
    int cols = (*grid)[0].size();

    vector<vector<float>> gCost(rows, vector<float>(cols, FLT_MAX));
    vector<vector<bool>> closed(rows, vector<bool>(cols, false));

    priority_queue<Node, vector<Node>, NodeComparison> open;

    Node start;
    start.x = pos.first;
    start.y = pos.second;
    start.gcost = 0;
    start.fcost = heuristic(pos.first, pos.second, end.first, end.second);
    start.path = { pos };

    open.push(start);
    gCost[pos.second - screenbuffer][pos.first - screenbuffer] = 0;
    int weight = 1; //experimenting weighted A*

    while (!open.empty())
    {
        Node node = open.top();
        open.pop();

        if (closed[node.y - screenbuffer][node.x - screenbuffer]) continue;
        closed[node.y - screenbuffer][node.x - screenbuffer] = true;

        if (node.x == end.first && node.y == end.second)
        {
            std::reverse(path->begin(), path->end());
            *path = node.path;
            return;
        }

        auto neighbors = getneighbors({ node.x, node.y }, grid);
        for (const auto& i : neighbors)
        {
            int nx = i.first - screenbuffer;
            int ny = i.second - screenbuffer;

            if (closed[ny][nx]) continue;

            float new_g = node.gcost + heuristic(node.x, node.y, i.first, i.second);
            float new_f = new_g + weight * heuristic(i.first, i.second, end.first, end.second);

            if (new_g < gCost[ny][nx])
            {
                gCost[ny][nx] = new_g;

                Node n;
                n.x = i.first;
                n.y = i.second;
                n.gcost = new_g;
                n.fcost = new_f;
                n.path = node.path;
                n.path.push_back({ i.first, i.second });

                open.push(n);
            }
        }
    }

    cout << "PATH NOT FOUND" << endl;
}
