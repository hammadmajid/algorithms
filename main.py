def main():
    cents = read_cents()


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


main()
