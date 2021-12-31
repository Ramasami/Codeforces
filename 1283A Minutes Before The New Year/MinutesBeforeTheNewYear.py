def main():
    t = int(input())
    while(t > 0):
        t -= 1
        h, m = [int(x) for x in input().split()]
        print((24-h) * 60 - m)


if __name__ == "__main__":
    main()
