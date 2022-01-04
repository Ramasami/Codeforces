def main():
    n = int(input())
    team1 = None
    team2 = None
    score1 = 0
    score2 = 0
    while(n > 0):
        n -= 1
        x = input()
        if team1 == None:
            team1 = x
            score1 = 1
        elif team1 == x:
            score1 += 1
        elif team2 == None:
            team2 = x
            score2 = 1
        else:
            score2 += 1

    if(score2 > score1):
        print(team2)
    else:
        print(team1)


if __name__ == "__main__":
    main()
