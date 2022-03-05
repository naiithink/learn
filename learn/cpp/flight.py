# -*- coding: utf-8 -*-

import json

class Flight:
    def __init__(self, capacity):
        self.__capacity = capacity
        self.__passengers = dict()
    
    def get_passengers(self):
        return self.__passengers
    
    def get_passenger_count(self):
        return len(self.__passengers)
    
    def open_seats(self):
        return self.__capacity - len(self.__passengers)

    # return status ::= (1: succeeded) | (0: failed) | (None: unknown error)
    def add_passenger(self, name):
        succeeded = None

        if self.open_seats():
            # dict.item() of the new passenger
            new_passenger = dict()

            # get a seat number for the new passenger
            if len(self.__passengers) == 0:
                seat_number = 1
            else:
                seat_number = len(self.__passengers) + 1
            
            new_passenger = {seat_number: name}

            # push the new passenger to self.__passengers
            self.__passengers.update(new_passenger)

            succeeded = 1
        else:
            succeeded = 0

        return succeeded




capacity = 3
flight = Flight(capacity)

people = ["Harry", "Ron", "Hermione", "Ginny", "Draco"]

print("Capacity:", capacity)
for person in people:
    done = None
    done = flight.add_passenger(person)
    if done:
        print("Done.")
    elif done == 0:
        print("No more seats.")
    elif done == None:
        print("Class method error.")
    else:
        print("Something went wrong.")

print(json.dumps(flight.get_passengers(), indent = 4))