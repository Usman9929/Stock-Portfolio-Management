s = input("Do you agree?")

if s in ["Y","y"]:
    print("Agreed.")
elif s in ["N","n"]:
    print("not agreed: ")
else:
    print("Please input y for yes and n for no")