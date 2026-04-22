class Solution {
public:

    string encode(vector<string>& strs) {
        string encoder;
        for(const auto& s: strs){
            string length = to_string(s.size());
            encoder += length + "#" + s;
        }
        return encoder;
    }

    vector<string> decode(string s) {
        vector<string> decoder;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while (s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            decoder.push_back(s.substr(i, length));
            i = i + length;
        }
        return decoder;
    }
};
