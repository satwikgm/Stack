class Solution
{
    public:
    //Function to calculate the span of stocks price for all n days.
    vector<int> brute(int price[], int n)
    {
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            int x = price[i];
            for(int j=i;j>=0;j--)
            {
                if(price[j]<=x)
                {
                   ans[i]++;
                }
                else
                {
                   break;
                }
            }
        }
        return ans;
    }
	
    vector <int> calculateSpan(int price[], int n)
    {
        // span = index of curr_item - index of closest greater item to left
        stack<int> s;
        s.push(0);
        vector<int> ans;
        ans.push_back(1);
        for(int i=1;i<n;i++)
        {
            while(s.empty()==false && price[i]>=price[s.top()])
            {
                s.pop();
            }
            if(s.empty())
            {
                ans.push_back(i+1);
            }
            else
            {
                ans.push_back(i-s.top());
            }
            s.push(i);
        }
        return ans;
    }
};
