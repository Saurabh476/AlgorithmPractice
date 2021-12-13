string = input()
output = ""
aa = ord('a')
az = ord('z')
AA = ord('A')
AZ = ord('Z')
for ch in string:
    val = ord(ch)
    if val >= aa and val <= az:
        val = val - aa
        val = val + 13
        val = val % 26
        val = val + aa
        output += chr(val)
    elif val >= AA and val <= AZ:
        val = val - AA
        val = val + 13
        val = val % 26
        val = val + AA
        output += chr(val)
    else:
        output += ch
    
print(output)