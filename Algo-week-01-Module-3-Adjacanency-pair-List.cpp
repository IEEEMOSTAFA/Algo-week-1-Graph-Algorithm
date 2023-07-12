/*
Graph Representation>>>>
Topic:Adjacency List->Linked List / c++ vector

# number of nodes =10
# number of edges =2

     2
0-------1
    9
4--------5

matrix[0][1] = 2
matrix[1][0] = 2
matrix[4][5] = 9
matrix[5][4] = 9
n*n -> matrix
T.C= O(n^2)
S.C= O(n^2)






A->0
B->1
C->2
D->3


A-----B
    /  \
   C----D
0-----1
    /  \
   2----3
Adjacency List
0-> 1
1->0,2,3
2->1,3
3->1,2

totoal node=4
total edge=4
A

*/

/*
0-----1
    /  \
   2----3
   Adj.List
   if directed but unweighted
   0->1
   1->2
   3->2
   3->1
->Directed + Weighted
     2
0-------->1
     4
1-------->2
     8
3-------->2

     7
3-------->1

0->(1,2)
1->(2,4)
2->
3->(2,8),(1,7)

*/
/*
new method (c++ 20 version):pair<int,int>variable_pair
Old method (c++           ):pair<int,int>(1,2)

1st pabo: variable_pair.first
2nd pabo: variable_pair.second


*/


#include<bits/stdc++.h>
using namespace std;
// Time complexity:   O(1)+O(n^2)+O(n^2) = O(n^2) 
//Space complexity:   O(1)+O(n)+ O(n^2)+O(1) = O(n^2)
int main()
{
    int i,j;
    int nodes = 4;       
    vector<pair<int,int> >adj_list[nodes];
      
    // adj_list[0].push_back({1,2});
    // adj_list[1].push_back({2,4});
    // adj_list[3].push_back({2,8});
    // adj_list[3].push_back({1,7});
    //Bikolpo niom :Adj list use kore o kaj korte pari
    adj_list[0] = {{1,2}};
    adj_list[1] = {{2,4}};
    adj_list[2] = {};
    adj_list[3] = {{2,8},{1,7}};

    for( i=0;i<nodes;i++)
    
    {
         cout<<i<<" -> ";
        for( j=0; j< adj_list[i].size();j++)
        {
         cout<<"("<<adj_list[i][j].first<<",   "<<adj_list[i][j].second<<"),   ";
        }
        cout<<endl;
    }

return 0;


}
