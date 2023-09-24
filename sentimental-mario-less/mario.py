# TODO
height = int(input("Height:"))

for i in range(height):
    for k in range(height - i - 1):
        print(" ")
    for l in range(i):
        print("#")