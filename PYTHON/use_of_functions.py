# def add(randomString):
#     print(randomString)

# answer = add("something")

def sum_of_numbers(number_array):
    sum = 0
    for i in number_array:
        sum += number_array[i-1]   
    return sum

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

print(sum_of_numbers(numbers))