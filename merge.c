ndictionary.words[WORDS] // our array of words
WORDS // number of words in the dictionary

// return whether or not word is in the dictionary
bool search(string word) {
    search2(word, 0, WORDS - 1);
}

bool search2(string word, int low, int high) {
    if (high == low) o
    {
        if (strcmp(word, dictionary.words[low]) == 0)
            return true;
        else return false;
    }
    
    int mid = (low + high) / 2;
    if (strcmp(word, dictionary.words[mid]) > 0)
    {
        search2(word, mid + 1, high);
    }
    if (strcmp(word, dictionary.words[mid]) < 0)
    {
        search2(word, low, mid - 1);
    }
    if (strcmp(word, dictionary.words[mid]) == 0)
    {
        return true;
    }
}
