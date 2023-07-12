vector<vector<int>> edgesToAdjList(int n, vector<vector<int>> edges) {
    vector<vector<int>> adjList(n);
	for (int i = 0; i < edges.size(); i++) {
		adjList[edges[i][0]].push_back(edges[i][1]);
		if (edges[i][0] == edges[i][1]) {
			continue;
		}
		adjList[edges[i][1]].push_back(edges[i][0]);
	}
	return adjList;
}
