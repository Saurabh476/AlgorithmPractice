import threading

"""
Program of thread syncronization, 
printEven(): Prints only even numbers
printOdd(): Prints only odd numbers

Both are syncronized, output is sequence from 1 - 20.
"""

Lock1 = threading._RLock()
Lock2 = threading.Lock()
Lock2.acquire()
"""
Using 2 locks
"""
def printEven():
    for i in range(0,20+1,2):
        Lock1.acquire()
        print(i)
        Lock1.release()
        if i != 20:
            Lock2.acquire()

def printOdd():
    # Lock2.acquire()
    for i in range(1,20+1,2):
        Lock1.acquire()
        Lock2.release()
        print(i)
        Lock1.release()


def solve2Locks():
    oddThread = threading.Thread(target=printOdd, args=())
    evenThread = threading.Thread(target=printEven, args=())
    evenThread.start()
    oddThread.start()

solve2Locks()

"""
Using only single Loc variable
"""

# lock_var = 0

# def printEven():
#     global lock_var
#     for i in range(0,20+1,2):
#         while lock_var == 1:
#             pass
#         print(i)
#         lock_var = 1

# def printOdd():
#     global lock_var
#     for i in range(1,20+1,2):
#         while lock_var == 0:
#             pass
#         print(i)
#         lock_var = 0


# def solveFlag():
#     oddThread = threading.Thread(target=printOdd, args=())
#     evenThread = threading.Thread(target=printEven, args=())
#     evenThread.start()
#     oddThread.start()

# solveFlag()
