def main():
    t = int(input())
    while(t > 0):
        t -= 1
        w, h, n = [int(x) for x in input().split()]
        two = 1
        while w % 2 == 0:
            w /= 2
            two *= 2
        while h % 2 == 0:
            h /= 2
            two *= 2
        if two >= n:
            print("YES")
        else:
            print("NO")


if __name__ == "__main__":
    main()
