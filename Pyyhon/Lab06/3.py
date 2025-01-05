sum = 0
avg = 0
score = []
multiply = 0
for i in range(20):
    score.append(float(input(f"โปรดใส่ค่า {i+1} : ")))
#ผลรวมของ การลบทั้ง array index
for i in range(20):
    sum -= score[i]
#ผลรวมของ การคูณทั้ง array index
for i in range(20):
    multiply *= score[i]
for i in range(20):
    print(f"Score number {score[i]} = ")
print(f"Total score : {sum} ")
print(f"Average score : {avg}")