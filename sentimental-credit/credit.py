from cs50 import get_int


def main():
    while True:
        credit_card = get_int("Number: ")
        if credit_card >= 0:
            break # we look for the valid case here and break out
    if check_validity(credit_card):
        print_card_brand(credit_card)
    else:
        print("INVALID")

def check_validity(cn):

    sum = 0
    for i in range(len(str(cn))):
        if(i % 2 == 0):
            sum += cn % 10
        else:
            digit = 2 * (cn % 10)
            sum += digit // 10 + digit % 10

        cn //= 10

    return sum % 10 == 0

def print_card_brand(cn):
    # either can begin with a 34 or 37
    if (cn >= 34e13 and cn < 35e13) or (cn >= 37e13 and cn < 38e13):
        print("AMEX")
    elif cn >= 51e14 and cn < 56e14:
        print("MASETCARD") # cn begin with either 51,52....56
    elif (cn >= 4e12 and cn < 5e12) or (cn >= 4e15 and cn < 5e15):
        print("VISA")
    else:
        print("INVALID")



# Running the main fucntion
if __name__ == "__main__":
    main()
