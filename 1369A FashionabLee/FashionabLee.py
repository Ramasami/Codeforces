def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        if n % 4 == 0:
            print("YES")
        else:
            print("NO")


if __name__ == "__main__":
    main()
