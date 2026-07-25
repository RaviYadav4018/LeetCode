class Solution {
public:
    int maxProduct(int n) {
    string res=to_string(n);
    sort(res.rbegin(),res.rend());
    int ans=(res[0]-'0')*(res[1]-'0');

    return ans;
    }
};