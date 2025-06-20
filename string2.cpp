// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int count,i;
//         int N;
//         cin>>N;
//         string S[N];
//         for(i=0;i<=N;i++)
//         {
//             cin>>S[i];
//         }
//         for(i=0;i<N;i++)
//         {
//             if(S[i]==S[i+1])
//             {
//                 count++;
//             }
//         }
//         cout<<count;
//     }
// }
#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
    {
	    int n, count=0;
	    string s;
	    cin>>n>>s;
	    
	    for (int i=0; i<n; i++) {
	        if (s[i] == s[i+1]) count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
