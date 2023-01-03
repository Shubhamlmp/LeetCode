class Solution {
public:
    unordered_map<string, string>mp;
    int i = 0;
    string encode(string longUrl) {
        string tinyUrl = "http://tinyurl.com/" + to_string(i);
        i++;
        mp[tinyUrl] = longUrl;
        return tinyUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));