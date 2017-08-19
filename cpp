#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,ins=1,ans=1,q,w;
        scanf("%d%d",&n,&m);
        int st[n+1],mi[n+1];
        for(int i=0;i<=n;i++)
        {st[i]=0;mi[i]=INT_MAX;}
        vector<vector<int> >graph(n+1);
        bool zero[n+1];
        memset(zero,0,sizeof(zero));
        for(int i=0;i<m;i++){
            scanf("%d%d",&q,&w);
            graph[q].push_back(w);
            if(q==0)
            zero[w]=1;
            mi[w]=min(q,mi[w]);
        }
        for(int i=0;ans&&i<graph[0].size();i++){
            for(int j=0;ans&&j<graph[0].size();j++){
                if(graph[0][i]<graph[0][j]){int rel=0;
                    for(int k=0;k<graph[i].size();k++)
                        if(graph[i][k]==graph[0][j])
                            rel=1;
                    if(rel==0)
                    ans=0;
                }
            }
        }
        for(int i=1;ans&&i<=n;i++){
            if(zero[i]==1)
            {st[i]=ins;ins++;}
            else{
                if(mi[i]!=INT_MAX)
                st[i]=st[mi[i]];
                else
                ans=0;
            }
        }
        for(int i=1;ans&&i<n;i++){bool nrel=0;
            for(int j=0;ans&&j<graph[i].size();j++){bool rel=1;
                if(graph[i][j]==i+1)
                    nrel=1;
                for(int k=i+1;k<graph[i][j];k++){
                    if(st[graph[i][j]]==st[k])
                    {rel=0;break;}
                }
                if(rel==0)
                    ans=0;
            }
            if(nrel==0)
                ans=0;
        }
        if(ans==0)
            printf("-1\n");
        else{
            for(int i=1;i<=n;i++)
            printf("%d ",st[i]);
            printf("\n");
        }
    }
return 0;
}
 
