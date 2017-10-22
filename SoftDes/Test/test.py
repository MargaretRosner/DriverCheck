


def is_triangle(a,b,c):
    a = int(a)
    b = int(b)
    c = int(c)
    if a > b+c or b > a+c or c > a+b:
        print("Nope")
    else:
        print("Yep")

is_triangle(3,4,5)

import doctest
doctest.testmod(verbose=True)



is_triangle(3,4,5)
