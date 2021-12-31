def main():
    t = int(input())
    while(t > 0):
        t -= 1
        a, b = [int(x) for x in input().split()]
        if a == b:
            print(0)
        elif a % 2 == b % 2:
            if a > b:
                print(1)
            else:
                print(2)
        else:
            if a > b:
                print(2)
            else:
                print(1)


if __name__ == "__main__":
    main()
