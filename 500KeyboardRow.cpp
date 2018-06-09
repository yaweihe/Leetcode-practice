/*
Given a List of words, 
return the words that can be typed using letters of alphabet 
on only one row's of American keyboard like the image below.
*/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        string s1 = "QWERTYUIOP";
        string s2 = "ASDFGHJKL";
        string s3 = "ZXCVBNM";

        vector<string> Fwords;

        for(int i =0; i < words.size(); ++i)
        {
        	string strTemp(words[i]);
        	int sum1 = 0, sum2 = 0, sum3 = 0;
        	transform(words[i].begin(),words[i].end(),strTemp.begin(), ::toupper);
        	 for (int j = 0; j < strTemp.size(); j++)  
            {  
                if (L1.find(strTemp[j]) != -1)sum1++;  
                if (L2.find(strTemp[j]) != -1)sum2++;  
                if (L3.find(strTemp[j]) != -1)sum3++;  
            }  
            if (sum1 == strTemp.size()) Fwords.push_back(strTemp);  
            if (sum2 == strTemp.size()) Fwords.push_back(strTemp);  
            if (sum3 == strTemp.size()) Fwords.push_back(strTemp); 
        }
        return Fwords;
    }
};