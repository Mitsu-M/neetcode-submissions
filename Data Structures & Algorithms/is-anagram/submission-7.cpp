class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false; //If those length are diferent, return false immidietlly
        std::unordered_map<char,int> count;

        for(char c:s){ //文字列sの先頭から末尾まで一文字ずつ順番に変数cにコピーしてループを回す
            count[c]++;
        }
        for(char c:t){
            count[c]--;
            if(count[c] < 0){
                return false;
            }
        }
        return true;

        
    }
};
