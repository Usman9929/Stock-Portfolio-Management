from cs50 import get_int


def main():
    while True:
        credit_card = get_int("Number: ")
        if credit_card >= 0:
            break # we look for the valid case here and break out
    if chec_validity(credit_card):
        print_card_brand(credit_card)
    else:
        print("INVALID")












if __name__ == "__main__":
main()
