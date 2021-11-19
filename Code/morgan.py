
from copy import copy
class trie:
    def __init__(self,):
        self.val = 0
        self.total = 0
        self.nextNode = [None for i in range(26)]

# n = 0
# updates = []
# queries = []
names = []
m = 0
def takeInput():
    n = int(input())
    temp = input().split()

    for i in range(n):
        names.append(temp[i].lower())

root = trie()
# print(root.nextNode)
def formTree():
    m = 0
    for name in names:
        node = copy(root)
        for ch in name:
            char = ord(ch) - ord('a')
            if node.nextNode[char] != None:
                node = node.nextNode[char]
                node.val += 1
                m = max(m, node.val)
                # node.total += 1
                
            else:
                temp = trie()
                # temp.val = val
                # temp.total += 1
                node.nextNode[char] = temp
                node = temp
        # print(root.nextNode)
    # print(m)
    out  =""
    node = copy(root)
    for ch in names[0]:
        # print(ch)
        char = ord(ch) - ord('a')
        if node.nextNode[char] and node.nextNode[char].val == m:
            out += ch
            node = node.nextNode[char]
    
    print(out)

def solve():
    takeInput()
    formTree()
solve()