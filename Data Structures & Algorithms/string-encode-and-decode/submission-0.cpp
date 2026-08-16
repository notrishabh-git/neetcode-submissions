class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (string s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {

            // Find the '#'
            int j = i;
            while (s[j] != '#') {
                j++;
            }

            // Get the length
            int len = stoi(s.substr(i, j - i));

            // Move after '#'
            j++;

            // Extract exactly len characters
            string word = s.substr(j, len);
            result.push_back(word);

            // Move to the next encoded string
            i = j + len;
        }

        return result;
    }
};