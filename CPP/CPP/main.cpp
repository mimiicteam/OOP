
    #include <iostream>

    int tim(std::string S, char x, int s, int e){
        int index = -1;
        for(int i = s; i < e; i++){
            if(S[i] == x)
                index = i;
        }
        return  index;
    }

    int lengthOfLongestSubstring(std::string S){
        int n = S.length();
        int len = 0, d = 0;
        int j = d + 1;
        while(d < n){
            int k = -1;
            while (tim(S, S[j], d, j) == -1 && j < n) {
                k = tim(S, S[j], d, j);
                j++;
                std::cout << k << "----" << j << std::endl;
            };
            if(len <= (j - d)) len = j - d;
            len = std::max(len, j - d);
            std::cout << "Lenght: " << len << std::endl;
            if(k == -1) d++;
        }
        return len;
    }

    int main(){
        std::cout << lengthOfLongestSubstring("abcabcbb");
    }

