def main():
    n, m = [int(x) for x in input().split()]
    c = set(["C","M","Y"])
    color = False
    for i in range(n):
        if len([x for x in input().split() if x in c]) > 0:
            color = True
            break
    if color:
        print("#Color")
    else:
        print("#Black&White")



if __name__ == "__main__":
    main()
