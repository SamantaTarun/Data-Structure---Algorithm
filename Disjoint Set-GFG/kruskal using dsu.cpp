struct Edge
{
    int src,dest,wt;
};

bool cmp(Edge e1,Edge e2)
{
    return e1.wt<e2.wt;
}

Edge arr[1000001];
int par[1000001];

int find(int x)
{
    if(par[x]==x)
      return x;

    return par[x]=find(par[x]);
}

void Union(int x,int y)
{
    int x_rep=find(x);
    int y_rep=find(y);

    if(x_rep==y_rep)
        return ;
    par[x_rep]=y_rep;
}



int kruskals(int g_nodes, vector<int> g_from, vector<int> g_to, vector<int> g_weight) {


      for(int i=0;i<(int)g_from.size();i++)
      {
          arr[i].src=g_from[i];
          arr[i].dest=g_to[i];
          arr[i].wt=g_weight[i];
      }

      sort(arr,arr+g_from.size(),cmp);

      int m=g_nodes;

      for(int i=0;i<=m;i++){
          par[i]=i;
      }
      int res=0;

      for(int i=0,s=0;s<m-1;i++){
          Edge e=arr[i];
          int x=find(e.src);
          int y=find(e.dest);

          if(x!=y)
          {
              res+=e.wt;
              Union(x,y);
              s++;
          }
      }

      //cout<<res<<endl;
    return res;
}
