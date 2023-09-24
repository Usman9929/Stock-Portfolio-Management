from cs50 import get_int

def main():
    while True:
        h = int(input("Enter credit number: "))
        if h >0:
            break

    odd_sum_digit=0
    even_sum_digit=0

    while (h > 0):
        last_digit= h % 10
        odd_sum_digit += last_digit
        even_digit= int((h / 10) % 10)

        if (2 * even_digit) > 9:
              even_digit = (2 * even_digit)-9
        else:
            even_digit = 2 * even_digit

        even_sum_digit += even_digit

        h=h//100

    sum= odd_sum_digit + even_sum_digit
    print(f"{sum}")  #Test that checksum works.


   if (sum % 10 == 0):
    