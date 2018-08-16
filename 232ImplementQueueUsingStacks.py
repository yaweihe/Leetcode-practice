from collections import deque
class MyQueue(object):

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.Myqueue = deque()
        

    def push(self, x):
        """
        Push element x to the back of queue.
        :type x: int
        :rtype: void
        """
        self.Myqueue.append(x)

    def pop(self):
        """
        Removes the element from in front of queue and returns that element.
        :rtype: int
        """
        if len(self.Myqueue) > 0:
        	return self.Myqueue.popleft()
        else:
        	return None

    def peek(self):
        """
        Get the front element.
        :rtype: int
        """
        if len(self.Myqueue) > 0:
        	return self.Myqueue[0]
        else:
        	return None
        

    def empty(self):
        """
        Returns whether the queue is empty.
        :rtype: bool
        """
        return len(self.Myqueue) == 0
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()



# use a list to implement it


    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.List=[]
        self.num=0


    def push(self, x):
        """
        Push element x to the back of queue.
        :type x: int
        :rtype: void
        """
        self.List.append(x)
        self.num+=1

    def pop(self):
        """
        Removes the element from in front of queue and returns that element.
        :rtype: int
        """
        self.num-=1
        return self.List.pop(0)


    def peek(self):
        """
        Get the front element.
        :rtype: int
        """
        if self.empty():
            return NULL
        return self.List[0]

    def empty(self):
        """
        Returns whether the queue is empty.
        :rtype: bool
        """
        return (self.num==0)

