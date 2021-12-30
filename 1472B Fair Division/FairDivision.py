def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        one = 0
        two = 0
        for x in input().split():
            if x == "1":
                one += 1
            else:
                two += 1
        if one % 2 == 1 or (two % 2 == 1 and one == 0):
            print("NO")
        else:
            print("YES")


if __name__ == "__main__":
    main()
