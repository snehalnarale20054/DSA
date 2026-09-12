class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        string temp = "";
        // Traverse the string and extract each word
        for (int i = 0; i < s.size(); i++)
        {
            // If current character is not a space, add it to the current word
            if (s[i] != ' ')
            {
                temp = temp + s[i];
            }
            else
            {
                // If a complete word is formed, store it in the vector
                if (temp.size() > 0)
                {
                    words.push_back(temp);
                    temp = "";
                }
            }
        }
        // Store the last word if it exists
        if (temp.size() > 0)
        {
            words.push_back(temp);
        }
        string ans = "";
        // Traverse the words vector from end to beginning and build the reversed sentence
        for (int i = words.size() - 1; i >= 0; i--)
        {
            ans = ans + words[i];
            // Add a space after every word except the last one
            if (i != 0)
            {
                ans = ans + " ";
            }
        }

        return ans;
    }
};