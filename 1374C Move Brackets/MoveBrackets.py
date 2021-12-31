def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = input()
        s = input()
        ans = 0
        open = 0
        for b in s:
            if b == "(":
                open+=1
            elif open == 0:
                ans+=1
            else:
                open-=1
        print(ans)


if __name__ == "__main__":
    main()
