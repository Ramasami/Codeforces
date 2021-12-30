def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        x = int(n/2020)
        if(n - x*2020 <= x):
            print("YES")
        else:
            print("NO")


if __name__ == "__main__":
    main()
