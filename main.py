def main():
    cents = read_cents()

    quarters = calculate_quarters(cents)
    cents = cents - quarters * 25

    dimes = calculate_dimes(cents)
    cents = cents - dimes * 10

    nickels = calculate_nickels(cents)
    cents = cents - nickels * 5

    pennies = calculate_pennies(cents)
    cents = cents - pennies * 1

    print(f'Total Coin(s): {quarters + dimes + nickels + pennies}')


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
    print(f'Quarter Coin(s): {quarter_coins}')
    return quarter_coins


def calculate_dimes(cents):
    dime_coins = 0
    while cents >= 10:
        dime_coins += 1
        cents -= 10
    print(f'Dime Coin(s): {dime_coins}')
    return dime_coins


def calculate_nickels(cents):
    nickel_coins = 0
    while cents >= 5:
        nickel_coins += 1
        cents -= 5
    print(f'Nickel Coin(s): {nickel_coins}')
    return nickel_coins


def calculate_pennies(cents):
    pennie_coins = 0
    while cents >= 1:
        pennie_coins += 1
        cents -= 1
    print(f'Pennie Coin(s): {pennie_coins}')
    return pennie_coins


if __name__ == '__main__':
    main()
