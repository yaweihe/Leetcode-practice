/*
Given two strings s and t, determine if they are isomorphic.
Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. 
No two characters may map to the same character but a character may map to itself.

Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false
Example 3:

Input: s = "paper", t = "title"
Output: true
Note:
You may assume both s and t have the same length.

*/

// 首先 s中的字符映射应该是一对一的，即每个字符只能对应一种映射，另外t也只允许一种字符映射过来，也是一对一的关系。
// 因此首先验证当前s是否存在多个值映射，如果存在那就返回false，如果是单值映射，那么检查t对应的元素是否被映射过（用set来加入已经被映射过的t中的字符）
class Solution{
public:
	bool isIsmorphic(string s, string t){
		map<char,char>hash;
        set<char>used;
        for(int i=0;i<s.size();i++)
        {
            if(hash.count(s[i])){
                if(hash[s[i]]!=t[i])return false;

            }
            else{
                	if(used.count(t[i]))return false;
               		else{ hash[s[i]]=t[i];
                		used.insert(t[i]);}
            }
        }
        return true;
	}
};


