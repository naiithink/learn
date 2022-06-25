# -*- coding: utf-8; mode: python; -*-

HERO = """Inspired by the Ruby in Twenty Minutes tutorial.
<https://www.ruby-lang.org/en/documentation/quickstart/>"""


class MegaGreeter:
    """The MegaGreeter class.
    """
    def __init__(self, names=["World"]) -> None:
        """Create a MegaGreeter instance.

        Arguments:

        - names: list of names
        """
        self.names = names
        print('\n' + HERO + '\n')

    def say_hi(self) -> None:
        """Say hi to everyone in turn.
        """
        if not self.names:
            print("...")
        else:
            for name in self.names:
                print(f"Hi, {name.capitalize()}!")

    def say_bye(self) -> None:
        """Say bye to everyone.
        """
        if not self.names:
            print("...")
        elif len(self.names) == 1:
            print(f"Goodbye {self.names[0]}.  Come back soon!")
        else:
            print(f"Goodbye {', '.join(self.names)}.  Come back soon!")

    def add(self, name: str) -> None:
        """Add someone to the list.
        """
        if name:
            self.names.append(name)
        else:
            pass

    def replace_names_with(self, name: list) -> None:
        """Replace the current list with a new one.
        """
        self.names = name

    def get_names(self) -> list:
        """Get the list of names.
        """
        return self.names


if __name__ == "__main__":
    pass
