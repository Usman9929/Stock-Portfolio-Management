from cs50 import get_int


def main():
    # Get Card Number from user.
    while True:
        credit_card = get_int("Number: ")
        if credit_card >= 0:
            break  # we look for the valid case here and break out
    if check_validity(credit_card):
        print_card_brand(credit_card)
    else:
        print("INVALID")


# Fucntion check that the card is valid or invalid
def check_validity(cred_card_no):
    sum = 0
    for i in range(len(str(4012888888881881))):
        if i % 2 == 0:
            sum += cred_card_no % 10
        else:
            digit = 2 * (cred_card_no % 10)
            sum += digit // 10 + digit % 10

        cred_card_no //= 10

    return sum % 10 == 0


def print_card_brand(cred_card_no):
    # either can begin with a 34 or 37
    if (cred_card_no >= 34e13 and cred_card_no < 35e13) or (cred_card_no >= 37e13 and cred_card_no < 38e13):
        print("AMEX")
    elif cred_card_no >= 51e14 and cred_card_no < 56e14:
        print("MASETCARD")  # cn begin with either 51,52....56
    elif (cred_card_no >= 4e12 and cred_card_no < 5e12) or (cred_card_no >= 4e15 and cred_card_no < 5e15):
        print("VISA")
    else:
        print("INVALID")


# Running the main fucntion
if __name__ == "__main__":
    main()
