// BFS DFS in java using arrayList

import java.util.*;

public class BFS{
   
   static int V=5;
   
   static int[] visited=new int[V];
   
   static List<Integer>[] adjList=new ArrayList[V];
   
   static ArrayDeque<Integer> queue=new ArrayDeque<>();
   
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

      Bfs();
      
   }
   
   public static void Bfs()
   {
     int node;
     queue.add(0);
     visited[0]=1;
     
     while(!queue.isEmpty())
     {
        node=queue.pollFirst();
        System.out.println(node + 1);
        
        if(adjList[node] !=null){
        
          for(int adjacent:adjList[node])
          {
             if(visited[adjacent]==0)
             {
               queue.add(adjacent);
               visited[adjacent]=1;
             }
          }
        }
     }
   }
   

}