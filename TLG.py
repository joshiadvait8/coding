#https://www.codechef.com/problems/TLG

player1 = []
player2 = []
diff = []
winner=1
matches = int(input())
matches1 = matches
while matches > 0:
    s = input()
    l = s.split(" ")
    player1.append(int(l[0]))
    player2.append(int(l[1]))
    matches = matches - 1

for i in range(matches1):
    if i > 0 and i < matches1:
        player1[i] = player1[i - 1] + player1[i]
        player2[i] = player2[i - 1] + player2[i]
    diff.append(abs(player1[i] - player2[i]))

maximum=max(diff)
for i in range(matches1):
    if(abs(player1[i] - player2[i])==maximum):
        if player1[i]>player2[i]:
            winner=1
            break
        else:
            winner=2

# print(player1)
# print(player2)
# print(diff)
print(winner,maximum)