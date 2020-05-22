    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	string s;
   //   set<int>st;
    	int test; cin>>test;
    	while(test--)
    	{
    		cin>>s;
    		int l = s.length();
    		bool shuru = true,one=false,two=false,three=false;
    		char first,second;
    		int mini = 10000009,co=0;
    		for(int i=0;i<l;i++)
    		{
    			if(s[i] == '1')
    			{
    				one = true;
    			}
    			else if(s[i] == '2')
    			{
    				two = true;		
    					}
    			else if(s[i] == '3')
    			{
    				three = true;
    			}
    		}
    		for(int i=0;i<l-1;i++)
    		{
    			if(s[i] != s[i+1] && shuru)
    			{
    				first = s[i];
    				shuru = false;
    				second = s[i+1];
    				co=2;
    			}
    			else if(s[i] != s[i+1])
    			{
    				if(s[i+1] == first)
    				{
    					first = s[i];
    					second = s[i+1];
    					co = 2;
    				}
    				else
    				{
    					co++;
    					second = s[i+1];
    					first = s[i];
    					mini = min(mini,co);
    					co=2;
    				}
    			}
    			else
    			{
    				co++;
    			}
    		}
    	//	int siz = st.size();
    		if(one && two && three)
    		{
    			cout<<mini<<endl;
    			
    		}
    		else{
    		cout<<"0"<<endl;
    	}
    	}
    }
