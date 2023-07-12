int uniqueSubstrings(string input)
{
    int n=input.length();
    int l=0;
    unordered_set<char> hash;
    int maxlen=0;
    for(int r=0; r<n; r++){
        if(!hash.count(input[r])){
            maxlen=max(maxlen,r-l+1);
            hash.insert(input[r]);
        }
        else{
            while(hash.count(input[r])){
                hash.erase(input[l]);
                l++;
            }
            hash.insert(input[r]);
        }
    }
    return maxlen;
}
