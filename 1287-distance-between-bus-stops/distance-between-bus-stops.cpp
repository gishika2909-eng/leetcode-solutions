class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int a = 0, b = 0;

        int n = distance.size();

        for(int i = start; i != destination; i = (i + 1) % n)
            a += distance[i];

        for(int i = destination; i != start; i = (i + 1) % n)
            b += distance[i];

        return min(a, b);
    }
};