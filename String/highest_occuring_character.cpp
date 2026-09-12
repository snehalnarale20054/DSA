char highestOccurringChar(char input[])
{

    int arr[26] = {0};

    // Count frequency of each character
    for (int i = 0; input[i] != '\0'; i++)
    {

        int number = input[i] - 'a';
        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;

    // Find the character with maximum frequency
    for (int i = 0; i < 26; i++)
    {

        if (arr[i] > maxi)
        {
            maxi = arr[i];
            ans = i;
        }
    }

    return 'a' + ans;
}