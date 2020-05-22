#include<bits/stdc++.h>
using namespace std;
const int bound=1e9;
int fx[]={0,-1,-1,-1,0,1,1,1};
int fy[]={1,1,0,-1,-1,-1,0,1};
map<pair<int, int>,int>can;
map<pair<int,int>,int>visited;
int sr,sc,er,ec,n;
int rn,st,ed;
bool flag = false;

void bfs(pair<int,int>start)
{
	queue<pair<int,int> >q;
	q.push(start);
	visited[start]++;
	while(!q.empty())
	{
		pair<int,int>p;
		p=q.front();
		q.pop();
		for(int i=0;i<8;i++)
		{
			int row = p.first+fx[i];
			int col = p.second+fy[i];
			if(row<=bound && col<=bound && row>=1 && col>=1 && can[{row,col}]>0 && visited[{row,col}]==0)
			{
				if(row ==er && col==ec)
				{
					cout<<visited[p]<<endl;
					flag = true;
					return;
				}
				q.push({row,col});
				visited[{row,col}] = visited[p]+1;
				
			}
		}
	}
}

int main()
{
	cin>>sr>>sc>>er>>ec;
	cin>>n;
	while(n--)
	{
		cin>>rn>>st>>ed;
		for(int i=st;i<=ed;i++)
		{
			can[{rn,i}]++;
		}
	}
	bfs({sr,sc});
	if(!flag) cout<<"-1"<<endl;
}
