class Solution(object):
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
       	list1=["q","w","r","t","y","u","i","o","p","e"]  
        list2=["a","s","d","f","g","h","j","k","l"]  
        list3=["z","x","c","v","b","n","m",]  
        listout = []
        for str1 in words:
        	flag = 1
        	if str1.lower()[0] in list1:
        		list4 = list1
        	elif str1.lower()[0] in list2:
        		list4 = list2
        	elif str1.lower()[0] in list3:
        		list4 = list3

        	for i in range(1,len(words)):
        		if str1.lower()[i] not in list4:
        			flag = 0
        			break
        	if flag:
        		listout.append(str1)
        return listout

