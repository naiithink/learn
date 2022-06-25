# -*- coding: utf-8; mode: python; -*-

from hola_naiithink.greeting import MegaGreeter

us = MegaGreeter(["Harry", "Ron", "Hermione", "Ginny"])
us.say_hi()
us.say_bye()

names = us.get_names()
print(f"us.get_names(): {names}")

us.replace_names_with(None)
us.say_hi()
us.say_bye()

names = us.get_names()
print(f"us.get_names(): {names}")
