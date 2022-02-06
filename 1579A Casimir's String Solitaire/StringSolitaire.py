def main():
    t = int(input())
    while(t > 0):
        t -= 1
        s = input()
        c = 0
        for i in s:
            if i == 'B':
                c += 1
            else:
                c -= 1
        if c == 0:
            print("YES")
        else:
            print("NO")


if __name__ == "__main__":
    main()
