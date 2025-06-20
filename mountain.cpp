#include<bits/stdc++.h>
using namespace std;
vector<int> next_higher_peak(vector<int>& heights)
{
    int n = heights.size();
    vector<int> result(n, -1);
    stack<int> s;

    for (int i=0;i<n;i++)
    {
        while (!s.empty()&&heights[i]>heights[s.top()])
        {
            int index=s.top();
            s.pop();
            result[index]=heights[i];
        }
        s.push(i);
    }
    return result;
}

int main()
{
    int n;
    cout<<"Enter the number of peaks: ";
    cin>>n;
    vector<int> heights(n);
    for (int i=0;i<n;i++)
    {
        cin>>heights[i];
    }
    vector<int> result=next_higher_peak(heights);
    for(int height : result)
    {
        cout<<height<<" ";
    }
    cout<<endl;
    return 0;
}