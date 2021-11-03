
from copy import copy
class trie:
    def __init__(self,):
        self.val = 0
        self.total = 0
        self.nextNode = [None for i in range(26)]

n = 0
updates = []
queries = []

def takeInput():
    n = int(input())
    for i in range(n):
        s = input().split()
        updates.append(s)

    # print(updates)

    n = int(input())
    for i in range(n):
        s = input().strip()
        queries.append(s)
    # print(queries)

root = trie()
# print(root.nextNode)
def formTree():
    for item in updates:
        node = copy(root)
        name, val = item
        val = int(val)
        for ch in name:
            char = ord(ch) - ord('a')
            if node.nextNode[char] != None:
                node = node.nextNode[char]
                node.val += val
                node.total += 1
                
            else:
                temp = trie()
                temp.val = val
                temp.total += 1
                node.nextNode[char] = temp
                node = temp
        # print(root.nextNode)

def findAverage():
    for item in queries:
        node = copy(root)
        prev = 0
        flag = True
        for ch in item:
            char = ord(ch) - ord('a')
            # print("In average")
            if node.nextNode[char] != None:
                node = node.nextNode[char]
                # print(node.val, node.total)
                prev = node.val
                prev = prev//node.total
            else:
                flag = False
                break
        if flag:         
            print(prev)
        else:
            print(0)
            
def solve():
    takeInput()
    # root = None
    formTree()
    findAverage()

solve()