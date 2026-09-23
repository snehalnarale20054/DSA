class Solution
{
public:
    int compress(vector<char> &chars)
    {

        int i = 0;            // i points to the starting of the current group
        int ans = 0;          // ans tells where to write the compressed result
        int n = chars.size(); // store the size of the array

        while (i < n)
        {

            int j = i + 1; // j starts from the next character

            // Move j while the characters are same
            // This helps us find the complete group
            while (j < n && chars[i] == chars[j])
            {
                j++;
            }

            // Store the current character in the answer
            chars[ans] = chars[i];
            ans++;

            // Calculate how many times the character appeared
            int count = j - i;

            // Write the count only if the character appeared more than once
            if (count > 1)
            {

                // Convert count from integer to string
                string countStr = to_string(count);

                // Store each digit of the count in the array
                for (char ch : countStr)
                {
                    chars[ans] = ch;
                    ans++;
                }
            }

            // Move i to the beginning of the next group
            i = j;
        }

        // Return the length of the compressed array
        return ans;
    }
};