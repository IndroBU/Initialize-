///Memset Vs fill stl
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int N;
    cin>>N;
     int A[N];
     for(int I=0; I<N; I++)
     {
         cin>>A[I];
     }
     for(int I=0; I<N; I++)
     {
         cout<<A[I]<<" ";
     }
     cout<<endl;
    //memset(A,5,sizeof(A));
    fill(A, &A[2],17);
    /*25+25+25+25+25=125
    125/25=5*/
    for(int I=0; I<sizeof(A)/sizeof(A[0]); I++)
     {
         cout<<A[I]<<" ";
     }
    return 0;
}
