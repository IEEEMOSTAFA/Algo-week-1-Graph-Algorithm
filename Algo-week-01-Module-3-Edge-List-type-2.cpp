/*
Graph Representation>>>>
Topic:Adjacency List->Linked List / c++ vector


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
[           //Ekane akta vector er vitor arekta vector nici .Tai 2 ta [] bracket nici----
[0,1,2]
[1,2,4]
[1,3,9]
[2,3,1]
]

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{


int nodes =4;
vector< vector<int> >edge_list ={ 
{0,1,2},{1,2,4},{1,3,9},{2,3,1}
};

for(int i=0;i<edge_list.size() ;i++)
{
    cout<<edge_list[i][0]<<" -- "<<edge_list[i][1]<<"  |  "<<edge_list[i][2] <<endl;

}


return 0;

//bikolpo vabe o push korte pari
}