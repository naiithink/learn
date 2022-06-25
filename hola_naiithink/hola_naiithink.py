# -*- coding: utf-8; mode: python; -*-
"""
Inspired by the Ruby in Twenty Minutes tutorial.
<https://www.ruby-lang.org/en/documentation/quickstart/>
"""

class MegaGreeter:
    def __init__(self, names=["World"]):
        self.names = names

    def say_hi(self):
        if not self.names:
            print("...")
        else:
            for name in self.names:
                print(f"Hello, {name.capitalize()}!")

    def say_bye(self):
        if not self.names:
            print("...")
        elif len(self.names) == 1:
            print(f"Goodbye {self.names[0]}.  Come back soon!")
        else:
            print(", ".join(self.names) + ".  Come back soon!")

    def add(self, name: str):
        self.names.append(name)

    def replace_names_with(self, name: list):
        self.names = name

    def get_names(self) -> list:
        return self.names

if __name__ == "__main__":
    mg = MegaGreeter()
    mg.say_hi()
    mg.say_bye()

    mg.add("Foo")
    mg.say_hi()
    mg.say_bye()

    mg.replace_names_with(["Harry", "Ron", "Hermione", "Ginny"])
    mg.say_hi()
    mg.say_bye()

    mg.replace_names_with(None)
    mg.say_hi()
    mg.say_bye()
