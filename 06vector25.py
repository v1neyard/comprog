id, grade = [], ["F", "D", "D+", "C", "C+", "B", "B+", "A", "A"]
mp = dict()
while (True):
    a = input().split()
    if a[0] == "q":
        break
    mp[a[0]] = a[1]
v = [i for i in input().split()]
for e in v:
    mp[e] = grade[grade.index(mp[e])+1]
for x, y in mp.items():
    print(x, y)