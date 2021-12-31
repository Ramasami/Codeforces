def main():
    str = input()
    s = ""
    for i in str:
        if i == ".":
            if s == "-":
                print(1, end="")
                s = ""
            else:
                print(0, end="")
        else:
            if s == "-":
                print(2, end="")
                s = ""
            else:
                s = "-"


if __name__ == "__main__":
    main()
