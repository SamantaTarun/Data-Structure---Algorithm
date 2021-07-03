#include<bits/stdc++.h>
#define N 4
using namespace std;
int maze[N][N],sol[N][N];

bool solveMazeRec(int i,int j);
bool solveMaze()
{

    if(solveMazeRec(0,0)==false){
        cout<<"No"<<endl;
        return false;
    }

    else
    {
        cout<<"Yes"<<endl;
        for(int i=0;i<N;i++)
        {

            for(int j=0;j<N;j++)
                cout<<sol[i][j]<<" ";

            cout<<endl;
        }
    }
}
bool isSafe(int i,int j)
{
    return (i<N && j<N && maze[i][j]==1);

}
bool solveMazeRec(int i,int j)
{

    //if it is the our result cell- bottom rightmost cell

    if(i==N-1 && j==N-1)
    {
        sol[i][j]=1;
        return true;
    }
    if(isSafe(i,j)==true)
    {

        sol[i][j]=1;
        if(solveMazeRec(i+1,j)==true)
            return true;
        else if(solveMazeRec(i,j+1)==true)
            return true;

        sol[i][j]=0;
    }
    return false;
}
int main()
{


        for(int i=0;i<N;i++)
        {

            for(int j=0;j<N;j++)
                cin>>maze[i][j];
        }
        solveMaze();
       return 0;
}




