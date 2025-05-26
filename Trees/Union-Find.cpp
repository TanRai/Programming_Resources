class UnionFind
{
    unordered_map<int,int> parent;
    unordered_map<int,int> rank;
    public:
    UnionFind(int n)
    {
        for(int i=1;i<=n;i++)
        {
            parent[i] = i;
            rank[i] = 0;
        }
    }   

    int find(int n)
    {
        int p = parent[n];
        while(p != parent[p])
        {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }

    bool uniond(int n1,int n2)
    {
        int p1 = find(n1);
        int p2 = find(n2);

        if(p1==p2)
            return false;

        if(rank[p1]>rank[p2])
            parent[p2] = p1;
        else if(rank[p2]>rank[p1])
            parent[p1] = p2;
        else
        {
            parent[p1] = p2;
            rank[p2] += 1;
        }
        return true;
    }
};



//Usgae example

class Solution {
    

public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        UnionFind* unionFind = new UnionFind(edges.size());

        vector<int> vec(2);
        for(auto edge:edges)
        {
            if(!unionFind->uniond(edge[0],edge[1]))
            {
                vec[0] = edge[0];
                vec[1] = edge[1];
            }
        }
        return vec;
    }
};