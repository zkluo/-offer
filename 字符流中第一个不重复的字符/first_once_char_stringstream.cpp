/*
 * 题目描述
 * 请实现一个函数用来找出字符流中第一个只出现一次的字符。例如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。
 */

//思路：hash table
class Solution
{
public:
    int hashTable[256] = {0}; 
    string s = ""; 
    void Insert(char ch)
    {
        if (ch > 256) 
            return;
        s = s + ch;   
        hashTable[ch]++;    
    }
    char FirstAppearingOnce()
    {
        for(char c : s){  
            if(hashTable[c] == 1)  
                return c;
        }
        return '#';
    }
};
