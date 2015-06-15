class MinStack:
    """ Version1
    def __init__(self):
        self.l = []
        self.minVal = None
    
    # @param x, an integer
    # @return an integer
    def push(self, x):
        self.l.append(x)
        if not self.minVal:
            self.minVal = x
        if x < self.minVal:
            self.minVal = x
        return x

    # @return nothing
    def pop(self):
        if self.l[-1] == self.minVal:
            del self.l[-1]
            if self.l:
                self.minVal = min(self.l)
            else:
                self.minVal = None
        else:
            del self.l[-1]
        
    # @return an integer
    def top(self):
        return self.l[-1]

    # @return an integer
    def getMin(self):
        return self.minVal
    """
    
    
    
    """ Version2 keep track of current min
    def __init__(self):
        self.q = []

    # @param x, an integer
    # @return an integer
    def push(self, x):
        curMin = self.getMin()
        if curMin == None or x < curMin:
            curMin = x
        self.q.append((x, curMin));

    # @return nothing
    def pop(self):
        self.q.pop()

    # @return an integer
    def top(self):
        if len(self.q) == 0:
            return None
        else:
            return self.q[len(self.q) - 1][0]

    # @return an integer
    def getMin(self):
        if len(self.q) == 0:
            return None
        else:
            return self.q[len(self.q) - 1][1]
    """
    
    
    
    # Version3 Use an stack to track the change of min
    def __init__(self):
        self.l = []
        self.minl = []
    
    # @param x, an integer
    # @return an integer
    def push(self, x):
        self.l.append(x)
        if not self.minl or x <= self.minl[-1]:
            self.minl.append(x)
        return x

    # @return nothing
    def pop(self):
        if self.l[-1] == self.minl[-1]:
            del self.minl[-1]
        del self.l[-1]
        
    # @return an integer
    def top(self):
        return self.l[-1]

    # @return an integer
    def getMin(self):
        return self.minl[-1]   
    