    bool isPalindrome(int x) {
        if(x < 0) return false;
        int t=x;
        long s=0;
        while(t) {
            s = s*10 + t%10;
            t /= 10;
        }
        return x==s;
    }