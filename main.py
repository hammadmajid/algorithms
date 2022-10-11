def main():
    cents = read_cents()

    quarters = calculate_quarters(cents)
    cents = cents - quarters * 25

    dimes = calculate_dimes(cents)
    cents = cents - dimes * 10


def read_cents():
    change = 0
    CONVERT_TO_CENTS = 100
    while True:
        try:
            change = float(input("Change Owed: "))
            change = round(change * CONVERT_TO_CENTS)
        except ValueError:
            print('Invalid input')

        if change >= 0.01:
            return change


def calculate_quarters(cents):
    quarter_coins = 0
    while cents >= 25:
        quarter_coins += 1
        cents -= 25
    return quarter_coins


def calculate_dimes(cents):
    dime_coins = 0
    while cents >= 10:
        dime_coins += 1
        cents -= 10
    return dime_coins


main()
