class Solution
{
    bool isSameFreq(int freq[26], int winFreq[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != winFreq[i])
            {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2)
    {
        int freq[26] = {0};
        // store frequency of characters in s1
        for (int i = 0; i < s1.length(); i++)
        {
            freq[s1[i] - 'a']++;
        }
        // here s1 = "ab" , s2 = "eidbaooo"

        // check every window in s2
        for (int i = 0; i < s2.length(); i++)
        {
            int windowindex = 0;
            int actualindex = i;
            int winFreq[26] = {0};

            while (windowindex < s1.length() && actualindex < s2.length())
            {
                winFreq[s2[actualindex] - 'a']++;
                windowindex++;
                actualindex++;
            }
            if (isSameFreq(freq, winFreq))
            {
                return true;
            }
        }
        return false;
    }
};