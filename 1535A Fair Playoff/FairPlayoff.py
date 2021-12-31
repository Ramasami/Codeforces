def main():
    t = int(input())
    while(t > 0):
        t -= 1
        a, b, c, d = [int(x) for x in input().split()]
        print("YES" if(max(a, b) > min(c, d) and max(c, d) > min(a, b)) else "NO")


if __name__ == "__main__":
    main()
