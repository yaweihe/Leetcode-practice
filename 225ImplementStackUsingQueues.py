from Queue import Queue
class MyStack(object):

    def __init__(self):
        """
        Initialize your data structure here.
        """
        #q1 作为进栈出栈，q2作为中转栈
        self.q1 = Queue()
        self.q2 = Queue()

    def push(self, x):
        """
        Push element x onto stack.
        :type x: int
        :rtype: void
        """
        self.q1.put(x)
        

    def pop(self):
        """
        Removes the element on top of the stack and returns that element.
        :rtype: int
        """
        while self.q1.qsize() > 1:
            self.q2.put(self.q1.get()) #将q1中除尾元素外的所有元素转到q2中
        if self.q1.qsize() == 1:
            res = self.q1.get() #弹出q1的最后一个元素
            tmp = self.q2 #交换q1，q2
            self.q2 = self.q1
            self.q1 = tmp
            return res
        

    def top(self):
        """
        Get the top element.
        :rtype: int
        """
        while self.q1.qsize() > 1:
            self.q2.put(self.q1.get()) #将q1中除尾元素外的所有元素转到q2中
        if self.q1.qsize() == 1:
            res = self.q1.get() #弹出q1的最后一个元素
            self.q2.put(res)  #与pop唯一不同的是需要将q1最后一个元素保存到q2中

            tmp = self.q2
            self.q2 = self.q1
            self.q1 = tmp
            return res
        

    def empty(self):
        """
        Returns whether the stack is empty.
        :rtype: bool
        """
        return not bool(self.q1.qsize() + self.q2.qsize())  #为空返回True，不为空返回False
        


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()