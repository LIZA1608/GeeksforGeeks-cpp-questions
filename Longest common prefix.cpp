/*https://practice.geeksforgeeks.org/problems/minimum-shift-for-longest-common-prefix0759/1*/


class Solution{
public:
    vector<int> longestCommonPrefix(string str1, string str2){
        int i=0;
        string ans="";
        while(i<str1.length()){
            ans.push_back(str1[i]);
            if(str2.find(ans)!=string::npos){
                i++;
            }
            else{
                break;
            }
        }
        if(i==0){
            return {-1,-1};
        }
        return{0,i-1};
    }
};
