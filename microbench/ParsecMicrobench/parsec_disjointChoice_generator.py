import sys
import random
alphabets = []
codes = (('a','z'),('A','Z'),('0','9'))

# create alphabet list
for r in codes:
    chars = map(chr, range(ord(r[0]),ord(r[1])+1))
    alphabets.extend(chars)

#print alphabets

header = open("header")
hCode = header.read()
header.close()

for n in range(0,62):
    grammarList = ["testParser = many ("]
    cnt = 0
    for alt in alphabets:
        grammarList.append("char \'{a}{a}\'".format(a=alt))
        cnt = cnt + 1
        if cnt > n:
            break
        else:
            grammarList.append(" <|> ")
    grammarList.append(")")
    f = open("./app/disjointChoice{n}.txt".format(n=n), 'w')
    f.write("".join(hCode))
    f.write("".join(grammarList))
    f.close
    # print "".join(grammarList)
