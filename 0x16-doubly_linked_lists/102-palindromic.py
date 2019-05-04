#!/usr/bin/python3
def isPali(str):
    for i in range(len(str) // 2):
        if str[i] != str[-1 - i]:
            return False
    return True

for i in range(999*999, -1, -1):
    if isPali(str(i)):
        print("Found: ", i)
