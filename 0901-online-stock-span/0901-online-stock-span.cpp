class StockSpanner {
private:
    vector<int> arr;
    pair<int, int> last = {INT_MAX, 0};
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        arr.push_back(price);
        int n = arr.size();
        int cnt = 0;
        if(last.first==price){
            last.second = last.second+1;
            last.first = price;
            return last.second;
        }
        for(int i = n-1; i>=0; i--){
            if(arr[i]<=price) cnt++;
            else break;
        }
        last = {price, cnt};
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */