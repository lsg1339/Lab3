Leonardo Garcia
Lab 3
Help recieved from classmates and TA.

Part 1: say n is 13, the sum is 91.
Part 2: An overflow could be detected by checking when the sum turns into a negative number.
        The value of n that causes the overflow is 256.
Part 3: The value of n that causes the overflow is 65536.
Part 4: An overflow could be detected by checking if product is a real number.  One way to do this would be by checking if the new product         is equal to old product plus the count.  Once it overflows this statement would no longer be true.
        The value that causes overflow is 35.
Part 5: The value that causes overflow is 171.
Part 6: The expected value should always be 0.  For float, it stops working at 10 and for doubl it stops at 6.
        This is because at some point, repeating numbers that are not 0 added up together no longer equal 1 and double is more accurate than float, so it is more accurate and stops for a lower value of n.  A fraction like 1/7 cannot be perfectly expressed in something like a double.
Part 7: The error occurs as i should never be 4.4 but float is not the most accurate type as float numbers are ever so slightly smaller than they appear so while the program displays 4.4 the float number is actually very slightly smaller.
When changing to a double, i is much more exact as the double type holds more decimal points, so the program never prints 4.4 as i reaches it exactly and is not printed.
