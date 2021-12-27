def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = input()
        print(int((int(n[0])-1)*10 + len(n)*(len(n)+1)/2))


if __name__ == "__main__":
    main()
