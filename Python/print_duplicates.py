numbers = [12, 44, 44, 28, 0, 5]

for i in range(0, len(numbers)):
    for j in range(i+1, len(numbers)):
        if numbers[i] == numbers[j]:
            print(numbers[i])