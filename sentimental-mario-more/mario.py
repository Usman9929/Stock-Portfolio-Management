# Get height from the user

while True:
    try:
        height = int(input("Height:"))
        if height >= 1 and height <= 8:
            break
    except:
        print("", end="")


for i in range(1, height + 1):
    for j in range(1, height + 1):
        # Start printing hashes after correct number of spaces
        if j > (height - i):
            print("#", end="")
        else:
            print(" ", end="")
    # print middle space and remaining
    if j == height:
        print(" ", "#" * i, end="")
print()
