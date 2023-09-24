# Get height from the user

while True:
    try:
        height = int(input("Height:"))
        if (height >= 1 and height <= 8)
        break
    except:
        print("", end="")

space = 1
for i in range(height):
    #print spaces
    for space in range(height - i - 1):
        print(" ", end="")

    #print hashes
    for j in range(i+1):
        print("#", end="")
    print(" ")
