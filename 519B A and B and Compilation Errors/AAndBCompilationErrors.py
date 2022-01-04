def getMap():
    s = {}
    for x in input().split():
        if x not in s:
            s[x] = 0
        s[x]+=1
    return s

def main():
    t = 2
    n = input()
    s = getMap()
    while(t > 0):
        t -= 1
        p = getMap()
        for k in s:
            if k not in p or p[k]!=s[k]:
                print(k)
                break
        s = p

if __name__ == "__main__":
    main()
