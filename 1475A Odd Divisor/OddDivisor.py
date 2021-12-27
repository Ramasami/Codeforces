def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        while n > 0:
            if n & 1 == 1:
                n = n >> 1
                if n == 0:
                    print("NO")
                else:
                    print("YES")
                n = 0
            n = n >> 1


if __name__ == "__main__":
    main()
