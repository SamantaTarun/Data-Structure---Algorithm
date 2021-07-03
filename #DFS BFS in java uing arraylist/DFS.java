// BFS DFS in java using arrayList

import java.util.*;

public class DFS{
   
   static int V=5;
   
   static int[] visited=new int[V];
   
   static ArrayList<Integer>[] adjList=new ArrayList[V];
   
      
   public static void main(String args[])
   {
      adjList[0]=new ArrayList<>();
      adjList[0].add(1);
      adjList[0].add(2);
      
      adjList[1]=new ArrayList<>();
      adjList[1].add(0);
      adjList[1].add(2);
      
      adjList[2]=new ArrayList<>();
      adjList[2].add(0);
      adjList[2].add(1);
      adjList[2].add(3);
      adjList[2].add(4);
      
      adjList[3]=new ArrayList<>();
      adjList[3].add(2);
      
      adjList[4]=new ArrayList<>();
      adjList[4].add(2);

      Dfs(0);      
   }
   
   public static void Dfs(int node)
   {
        visited[node]=1;
        
        System.out.print(node+1+" "); //node+1 here i have taken fisrt node as 0; Aand for printing i have used 1 based
        
        if(adjList[node] !=null)
        {
          for(int adjacent : adjList[node]){
          
            if(visited[adjacent]==1)
            {
              System.out.print(adjacent+1 +" ");
              continue;
            }
            Dfs(adjacent);
            }
        }
   }
   

}