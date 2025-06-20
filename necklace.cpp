#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  int n,k,in;
      cout<<"Enter the number of elements and the number to be entered: ";
	  cin>>n>>k;
	  queue<int> first;
	  queue<int> final;
	  for(int i=0;i<k;i++)
	  {
	    cin>>in;
	    first.push(in);
	  }
	  for(int i=k;i<n;i++)
	  {
	    cin>>in;
	    final.push(in);
	  }
	  while(!first.empty())
	  {
	    final.push(first.front());
	    first.pop();
	  }
	   while(!final.empty())
	  {
	    cout<<final.front()<<" ";
	    final.pop();
	  }
	  cout<<endl;
	}
	return 0;
}