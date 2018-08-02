class Solution:
    # @param n, an integer
    # @return an integer
    '''
	先将输入转换成2进制字符串，再翻转并扩充到32位，再将此32位的二进制转为无符号整数即可。利用Python的bin()函数很方便。
    '''
    def reverseBits(self, n):
    	res = bin(n)[:1:-1]
    	return int(res + '0'*(32-len(res)), 2)

   '''
   按位处理，将输入n的二进制表示从低位到高位的值依次取出，逆序排列得到翻转后的值。这里更新res的时候，用纯位操作会比用加法要快的多。
   '''

   def reverseBits(self, n):
    	"""
        :type n: int
        :rtype: int
        """
        res = 0
        for i in xrange(32):
            res <<= 1
            res |= ((n >> i) & 1)
        return res


    