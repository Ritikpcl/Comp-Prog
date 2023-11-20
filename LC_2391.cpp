class Solution {
public:
    int garbageCollection(vector<string>& g, vector<int>& t) {
        
        unordered_map<char,int> mp;
        for(int i=0; i<g.size(); i++)
        {
            string s = g[i];
            for(int j=0; j<s.length(); j++)
                mp[s[j]] = i;
        }
        
        int sum = 0;
        for(auto i:mp)
        {
            char c = i.first;
            
            for(int j=0; j<=i.second; j++)
            {
                string s = g[j];
                int count = 0;
                for(int k=0; k<s.length(); k++)
                {
                    if(s[k] == c)
                    {
                        count++;
                    }
                }
                if(j>0) sum += count + t[j-1];
                else sum += count;
            }
            
        }
        return sum;
    }
};