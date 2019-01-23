print("hello, what is your name?")
myName = input()
print("my name is " + myName)
print("it is good to know you " + myName)
print("the length of your name is")
print(len(myName))
print("okay, let's go to your privacy")
print("enter your password")
password = input()
if password == 'hello':
    print("access granted")
else:
    print("hello stranger")
print("how old are you??")
age = input()
print("you will be  " + str(int(age) + 1) + " in a a year " + myName)
print("Lets get this information in a new way from this new person")

def sayhi(name=input("enter your name: ") , age=int(input("Enter your age: "))):
    print("Hello " + name + " Welcome to our Jzoo state")
    print("you're " + str(age) + " years old")
sayhi()

