class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
        int count = 0;
        string d = "equilateral";
        string e = "isosceles";
        string f = "scalene";
        if(a+b<=c || a+c<=b || b+c<=a){
            return "none";
        }
        if(a==b){
            count++;
        }
        if(b==c){
            count++;
        }
        if(a==c){
            count++;
        }
        if(count==3){
            return d;
        }
        if(count==1){
            return e;
        }
        return f;
    }
};