# Program for Q1


# Function to get the sum
def multiple_sum(divisor_01, divisor_02, upper_bound):
    # loop through to get the sum of the multiples
    sum = 0
    for counter in range(upper_bound):
        if (counter % 3 == 0) or (counter % 5 == 0):
            sum += counter
    return sum


# The main function
def main():
    # Get the user input
    divisor_01, divisor_02, upper_bound = input(
        "Enter divisor_01, divisor_02 and upper_bound: ").split()
    print(multiple_sum(int(divisor_01), int(divisor_02), int(upper_bound)))


if __name__ == "__main__":
    main()
