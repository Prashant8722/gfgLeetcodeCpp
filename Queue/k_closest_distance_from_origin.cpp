#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
{
    auto cmp = [](const vector<int> &p1, const vector<int> &p2)
    {
        return (p1[0] * p1[0] + p1[1] * p1[1]) > (p2[0] * p2[0] + p2[1] * p2[1]);
    };
    // priority_queue named pq that stores vectors of integers. The underlying container type is vector<vector<int>>.
    // The cmp function object is used to define the priority order of the elements in the queue.
    priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> pq(cmp);

    for (const auto &point : points)
    {
        pq.push(point);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }

    vector<vector<int>> result;
    while (!pq.empty())
    {
        result.push_back(pq.top());
        pq.pop();
    }

    return result;
}

int main()
{
    vector<vector<int>> points = {{1, 0}, {0, 1}};
    int k = 2;

    vector<vector<int>> closestPoints = kClosest(points, k);

    cout << "Closest points to the origin:" << endl;

    for (const auto &point : closestPoints)
    {
        cout << "[" << point[0] << ", " << point[1] << "]" << endl;
    }

    return 0;
}