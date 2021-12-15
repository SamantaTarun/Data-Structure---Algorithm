class Solution {
public:
    /**
     * @param pid: the process id
     * @param ppid: the parent process id
     * @param kill: a PID you want to kill
     * @return: a list of PIDs of processes that will be killed in the end
     */
    vector<int> killProcess(vector<int> &pid, vector<int> &ppid, int kill) {
        // Write your code here

        vector<int>arr[10001];
        int visited[10001];
        vector<int>res;
        memset(visited,0,sizeof(visited));
        for(int i=0;i<ppid.size();i++)
        {
            if(ppid[i]!=0)
            {
                arr[ppid[i]].push_back(pid[i]);
                //arr[pid[i]].push_back(ppid[i]);
            }
              
        }
        queue<int>q;
        q.push(kill);
        visited[kill]=1;
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            res.push_back(curr);

            for(auto child:arr[curr])
            {
                if(visited[child]==0)
                {
                    q.push(child);
                    visited[child]=1;
                }
            }

        }
        return res;
    }
};
