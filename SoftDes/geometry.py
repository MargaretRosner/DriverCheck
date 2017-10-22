"""
SoftDes Spring 2017 day 10 in-class exercise: Geometry classes
"""
import math


class Line(object):
    def __init__(self, x0, y0, x1, y1):
        self.x0 = x0
        self.y0 = y0
        self.x1 = x1
        self.y1 = y1


    def __repr__(self):
        """Python's `print` statement calls this method. It should return a string.

        Examples:
        >>> line = Line(10, 20, 100, 200)
        >>> print(line)
        Line(10, 20, 100, 200)
        """
        return 'Line(%d, %d, %d, %d)' %(self.x0, self.y0, self.x1, self.y1)


    def top(self):
        """Return the smallest y value.

        function within a class is a method
        ones with underscores inrfont are built in

        This is the *opposite* of the convention in math. It's the standard convention in many computer window
        systems and 2D computer graphics systems -- probably because Western writing systems, except boustrophedon
        Greek and Irish runes, are written from left to right (x increases to the right) and top to bottom (y
        increases towards the ground).

        Examples:
        >>> Line(10, 20, 100, 200).top()
        20
        >>> Line(100, 200, 10, 20).top()
        20
        """
        return self.y0 if self.y0 < self.y1 else self.y1

    def left(self):
        """The smallest x value.

        Whew.

        Examples:
        >>> Line(10, 20, 100, 200).left()
        10
        >>> Line(100, 200, 10, 20).left()
        10
        """
        return self.x0 if self.x0 < self.x1 else self.y1

    def bottom(self):
        """Examples:
        >>> Line(10, 20, 100, 200).bottom()
        200
        >>> Line(100, 200, 10, 20).bottom()
        200
        """
        return self.y0 if self.y0 > self.y1 else self.y1

    def right(self):
        """Examples:
        >>> Line(10, 20, 100, 200).right()
        100
        >>> Line(100, 200, 10, 20).right()
        100
        """
        return self.x0 if self.x0 > self.x1 else self.x1

    def length(self):
        """Examples:
        >>> Line(10, 20, 10 + 30, 20 + 40).length()
        50.0
        """
        return math.sqrt((self.x1 - self.x0, 2)**2 + (self.y1 - self.y0, 2)**2

    def is_horizontal(self):
        """Examples:
        >>> Line(10, 20, 100, 20).is_horizontal()
        True
        >>> Line(10, 20, 10, 200).is_horizontal()
        False
        """
        return self.y0 == self.y1

    def is_vertical(self):
        """Examples:
        >>> Line(10, 20, 10, 200).is_vertical()
        True
        >>> Line(10, 20, 100, 20).is_vertical()
        False
        """
        return self.x0 == self.x1

    def intersection(self, other):
        """Going Beyond: Returns the intersection of two lines.

        For this assignment, this only need work if `self` and `other` are
        both horizontal. This is already surprisingly difficult.

        Examples:
        # >>> Line(10, 20, 100, 20).intersection(Line(5, 20, 105, 20))
        # Line(10, 20, 100, 20)
        # >>> Line(10, 20, 100, 20).intersection(Line(5, 20, 15, 20))
        # Line(10, 20, 15, 20)
        # >>> Line(10, 20, 100, 20).intersection(Line(15, 20, 105, 20))
        # Line(15, 20, 100, 20)
        # >>> Line(10, 20, 100, 20).intersection(Line(15, 20, 95, 20))
        # Line(15, 20, 95, 20)
        # >>> Line(15, 20, 95, 20).intersection(Line(10, 20, 100, 20))
        # Line(15, 20, 95, 20)
        """
        return self.x1 == self.x0


class Rect(object):
    def __init__(self, x0, y0, x1, y1):
        self.x0 = x0
        self.y0 = y0
        self.x1 = x1
        self.y1 = y1

    def __str__(self):
        """Examples:
        >>> rect = Rect(10, 20, 100, 200)
        >>> print(rect)
        Rect(10, 20, 100, 200)
        """
        return 'Line(%d, %d, %d, %d)' %(self.x0, self.y0, self.x1, self.y1)

    def width(self):
        """Examples:
        >>> Rect(10, 20, 100, 200).width()
        90
        >>> Rect(100, 200, 10, 20).width()
        90
        """
        return abs(self.x1 -self.x0)

    def height(self):
        """Examples:
        >>> Rect(10, 20, 100, 200).height()
        180
        >>> Rect(100, 200, 10, 20).height()
        180
        """
        return abs(self.y1 - self.y0)

    def area(self):
        """Examples:
        >>> Rect(10, 20, 100, 200).area()
        16200
        """
        return self.width() * self.height()

    def bbox(self):
        """Return this shape's bounding box. This is the smallest practically-computable rectangle that contains all
        the points in this shape's interior. For a rectangle, its bounding box is itself. The bounding box is a
        fundamental graphics concept. The Going Beyond exercise illustrates one way this method is helpful."""
        return self

    def contains_pt(self, x0, y0):
        """Examples:
        >>> Rect(10, 20, 100, 200).contains_pt(5, 5)
        False
        >>> Rect(10, 20, 100, 200).contains_pt(50, 50)
        True
        >>> Rect(10, 20, 100, 200).contains_pt(5, 50)
        False
        >>> Rect(10, 20, 100, 200).contains_pt(50, 5)
        False
        >>> Rect(10, 20, 100, 200).contains_pt(50, 300)
        False
        >>> Rect(100, 200, 10, 20).contains_pt(50, 50)
        True
        """
        pass

    def intersection(self):
        """Going Beyond: intersection. `self` is another instance of `Rect`.

        Examples:
        # >>> Rect(10, 20, 100, 200).intersection(Rect(15, 25, 90, 180))
        # Rect(15, 25, 90, 180)
        """
        pass


if __name__ == "__main__":
    import doctest
    doctest.testmod()
    #doctest.run_docstring_examples(Line.bottom, globals(),verbose=True)
