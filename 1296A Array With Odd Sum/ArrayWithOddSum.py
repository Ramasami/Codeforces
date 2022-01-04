def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = input()
        even = 0
        odd = 0
        for x in input().split():
            if int(x) % 2 == 0:
                even += 1
            else:
                odd += 1
        if odd == 0 or (odd % 2 == 0 and even == 0):
            print("NO")
        else:
            print("YES")


if __name__ == "__main__":
    main()
