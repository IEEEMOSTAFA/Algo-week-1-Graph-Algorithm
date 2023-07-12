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



#include<bits/stdc++.h>
using namespace std;
// Time complexity:   O(1)+O(n^2)+O(n^2) = O(n^2) 
//Space complexity:   O(1)+O(n)+ O(n^2)+O(1) = O(n^2)
int main()
{
    int i,j;
    int nodes = 4;//T.C:O(1) ->S.C:O(1)       
    vector<int>adj_list[nodes];//T.C:O(1) ->S.C:O(n)    
      // Time.Com:O(E*2)  -> O(E) ->O(n^2)  // karon protiti node 2ta kore edge er sate jukto.tai complexity digon kore barve   
    //S.Complexity:O(E*2)  -> O(E) ->O(n^2)
    adj_list[0] = {1};
    adj_list[1] = {0,2,3};
    adj_list[2] = {1,3};
    adj_list[3] = {1,2};
    //Time Complexity: O(E*2)  -> O(E) ->O(n^2) 
    //S.C:O(1)
    for( i=0;i<nodes;i++)
    
    {
         cout<<i<<" -> ";
        for( j=0; j< adj_list[i].size();j++)
        {
         cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;


}
