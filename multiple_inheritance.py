class A:
    def greet1(self):
        print("Hello 1")
class B:
    def greet2(self):
        print("Hello 2")
class C:
    def greet3(self):
        print("Hello 3")
class D(A,B,C):
    def greet4(self):
        print("Hello 4")

obj = D()
obj.greet1()
obj.greet2()
obj.greet3()
obj.greet4()

