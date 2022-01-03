def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        x = (n-2) * 180
        x = x / n
        x = 180 - x
        if 90 % x == 0:
            print("YES")
        else:
            print("NO")


if __name__ == "__main__":
    main()
