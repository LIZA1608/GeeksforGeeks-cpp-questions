
/*https://practice.geeksforgeeks.org/problems/phone-directory4628/1*/

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        vector<vector<string>>ans;
        for(int i=0;i<s.size();i++){
            set<string>st;
            for(int j=0;j<n;j++){
                if(s.substr(0,i+1)==contact[j].substr(0,i+1))
                st.insert(contact[j]);
            }
            if(st.size()==0){
                st.insert("0");
            }
            vector<string>v(st.begin(),st.end());
            ans.push_back(v);
        }
        return ans;
    }
};
