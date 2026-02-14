class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        string sentence="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                sentence+=s[i];
            }
        }
        
        for(int i=0;i<sentence.size();i++){
            sentence[i]=tolower(sentence[i]);
        }
        
        
        vector<int> arr(26,0);
        for(int i=0;i<sentence.size();i++){
            int index=sentence[i]-'a';
            arr[index]++;
        }

        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) return false;
        }
        return true;
    }
};