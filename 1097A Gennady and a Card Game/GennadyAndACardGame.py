def main():
    table = input()
    hand = [x for x in input().split()]

    tableRank = table[0]
    tableSuit = table[1]

    found = False
    for card in hand:
        if card[0] == tableRank or card[1] == tableSuit:
            found = True
    if found:
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    main()
