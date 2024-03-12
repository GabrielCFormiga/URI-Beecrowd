count = 0
sum = 0

for i in range(6):
    x = float(input())
    if x >= 0:
        count += 1
        sum += x

print(count, "valores positivos")
if count > 0:
    print("{:.1f}".format(sum / count))
else: 
    print(0)