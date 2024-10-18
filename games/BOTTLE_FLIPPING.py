import random

def flip_bottle():
    return random.randint(1, 5)  # 1 to 5 flips to land upright

def play_game():
    print("Welcome to the Bottle Flipping Game!")
    print("Try to guess the number of flips needed to land the bottle upright (between 1 and 5).")
    required_flips = flip_bottle()
    attempts = 0

    while True:
        try:
            guess = int(input("Enter your guess (1-5): "))
            if guess < 1 or guess > 5:
                print("Please enter a number between 1 and 5.")
                continue
        except ValueError:
            print("Invalid input. Please enter a number between 1 and 5.")
            continue

        attempts += 1

        if guess == required_flips:
            print(f"Congratulations! You flipped the bottle upright in {attempts} attempts!")
            break
        elif guess < required_flips:
            print("Too low! Try again.")
        else:
            print("Too high! Try again.")

if __name__ == "__main__":
    play_game()
