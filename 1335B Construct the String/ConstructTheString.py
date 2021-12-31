def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n, a, b = [int(x) for x in input().split()]
        base = ""
        for i in range(0, a-b + 1):
            base += "a"
        for i in range(0, b-1):
            base += str(chr(ord('b')+i))
        ans = ""
        for i in range(0, int(n/a)):
            ans += base
        ans += base[:n % a]
        print(ans)


if __name__ == "__main__":
    main()
