class Solution:
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
     	c={'a': '.-', 'b': '-...', 'c': '-.-.','d': '-..','e': '.' , 'f': '..-.','g': '--.', 'h': '....', 'i': '..', 'j':'.---', 'k': '-.-',  'l': '.-..','m': '--','n': '-.', 'o': '---', 'p': '.--.', 'q': '--.-','r': '.-.', 's': '...', 't': '-',  'u': '..-', 'v': '...-','w': '.--', 'x': '-..-',  'y': '-.--', 'z': '--..'}
        
        list_words=[]
        for word in words:
            temp_word=''
            for i in word:
                temp_word+=c[i]
            list_words.append(temp_word)
        
        return len(set(list_words))