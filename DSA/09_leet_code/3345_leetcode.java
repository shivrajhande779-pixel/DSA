class Solution {
    public static int productofdigits(int n){
        int product = 1;
        while(n>0){
            int digit = n%10;
            product = product*digit;
            n = n/10;
        }
        return product;
    }
    public int smallestNumber(int n, int t) {
        while(true){
            int product = productofdigits(n);
            if(product%t==0){
                return n;
            }
            else{
                n++;
            }
        }
    }
}