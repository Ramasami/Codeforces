def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        s = set()
        l = []
        [(s.add(x),l.append(x)) for x in input().split() if x not in s] 
        print(" ".join(l))


if __name__ == "__main__":
    main()
