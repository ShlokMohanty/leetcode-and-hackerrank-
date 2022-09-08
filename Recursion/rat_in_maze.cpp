#include<iostream>
using namespace std;
bool positionpossibility(int **maze, int x, int y, int n)
{
    // first of all check if x and y are less than the number of maze elements and maze[x][y]==1
    if(x<n && y<n && maze[x][y]==1)
    {
        return true;
    }
    return false;
}
bool ratinmaze(int **maze, int x, int y, int n, int **sol)
{
    if(x==n-1 && y==n-1)
    {
        sol[x][y]==1;
        return true;
    }
    if(positionpossibility(maze,x,y,n))
    {
        sol[x][y]==1;
        if(ratinmaze(maze,x+1,y,n,sol))
        {
            return true;
        }
        if(ratinmaze(maze,x,y+1,n,sol))
        {
            return true;
        }
        // now comes the case of backtracking 
        sol[x][y]==0;
        return false;
    }
}
    


int main()
{
    int n;
    cin>>n;
    int** maze= new int*[n];
    int** sol = new int*[n];
    for(int i=0;i<n;i++)
    {
        maze[i]=new int[n];
    }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>maze[i][j];
         }
     }
     for(int i=0;i<n;i++)
     {
         sol[i]=new int[n];
         for(int j=0;j<n;j++)
         {
             sol[i][j]==0;
         }
     }
     if(ratinmaze(maze,0,0,n,sol)){
         

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             cout<<sol[i][j]<<" ";
         }
         cout<<endl;
     }
        
    }
}    
