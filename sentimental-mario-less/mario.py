# TODO
while True:
    try:
        height = int(input("Height:"))
        if (height >= 1 and height <= 8):
            break
    except:
        print("", end="")

k = 1
for i in range(height):
    
    #print Spaces
    for k in range(height - i - 1):
        print(" ", end="")

        #print hashas
    for l in range(i+1):
        print("#", end="")

    print()