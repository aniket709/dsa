class Solution {
  public:
    int minSteps(vector<int>& arr, int start, int end) {

    if (start == end)
        return 0;

    const int MOD = 1000;

    vector<int> dist(MOD, INT_MAX);
    queue<int> q;

    dist[start] = 0;
    q.push(start);

    while (!q.empty()) {

        int node = q.front();
        q.pop();

        for (int x : arr) {

            int nxt = (node * x) % MOD;

            if (dist[node] + 1 < dist[nxt]) {

                dist[nxt] = dist[node] + 1;

                if (nxt == end)
                    return dist[nxt];

                q.push(nxt);
            }
        }
    }

    return -1;


    }
};