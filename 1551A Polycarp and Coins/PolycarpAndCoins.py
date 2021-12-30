def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        if (n % 3 == 0):
            print(int(n/3), int(n/3))
        elif(n % 3 == 1):
            print(int(n/3)+1, int(n/3))
        else:
            print(int(n/3), int(n/3)+1)


if __name__ == "__main__":
    main()
