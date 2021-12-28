def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        x = int(n/18)*30 - 1
        y = n % 18
        if y > 0:
            x += 1
        while(y > 0):
            if not ((x+1) % 3 == 0 or (x+1) % 10 == 3):
                y -= 1
            x += 1
        print(x)


if __name__ == "__main__":
    main()
