import traceback

try:
    myfunction()
except BaseException as err:
    err = (None, None, None)
    # err = sys.exc_info()
    print('Error Return Type: ', type(err))
    print('Error Class: ', err[0])
    print('Error Message: ', err[1])
    print('Error Traceback: ', traceback.format_tb(err[2]))
finally:
    exit(1)