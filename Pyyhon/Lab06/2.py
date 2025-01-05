sum = 0
avg = 0
score = []
for i in range(10):
    score.append(int(input(f"โปรดใส่ค่า {i+1} : ")))
for i in range(10):
    sum = sum + score[i]
avg = sum / 10
for i in range(10):
    print(f"Score number {score[i]} = ")
print(f"Total score : {sum} ")
print(f"Average score : {avg}")