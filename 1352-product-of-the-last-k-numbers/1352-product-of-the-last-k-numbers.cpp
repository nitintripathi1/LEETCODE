class ProductOfNumbers {
public:
vector<int>nums;
int n;
    ProductOfNumbers() {
        nums.clear();
        n = 0;
    }
    
    void add(int num) {
      nums.push_back(num);  
    }
    
    int getProduct(int k) {
        int prod = 1;
        int n = nums.size();
        for(int i = n-1; i >= n-k; i--){
            prod = nums[i]*prod;
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */