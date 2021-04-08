from random import *

print('Please enter a number between 1 and 100')
user_guessed_number = False
rand_number = randint(1, 100)
guesses = 0


while not user_guessed_number:
    user_input = input()
    try: 
        user_input = int(user_input)
    except:
        print('Please enter a number!')
    if(user_input != rand_number):
        if(user_input > rand_number):
            print('Your number was too big!')
            guesses += 1
        if(user_input < rand_number):
            print('Your number was too small!')
            guesses += 1
    else:
        print('Congrats, you guessed the number ' + str(rand_number) + ' with ' + str(guesses) + ' tries!')
        user_guessed_number = True