import math

class Complex(object):
    def __init__(self, real, imaginary):
        self.real=real
        self.imaginary=imaginary
    def __add__(self, no):
        a=self.real+no.real
        b=self.imaginary+no.imaginary
        if a<0 and b<0:
            return ("-%.2f-%.2fi"%(abs(a),abs(b)))
        elif a>=0 and b<0:
            return ("%.2f-%.2fi"%(abs(a),abs(b)))
        elif a<0and b>=0:
            return ("-%.2f+%.2fi"%(abs(a),abs(b)))
        elif a>=0and b>=0:
            return ("%.2f+%.2fi"%(abs(a),abs(b)))
    def __sub__(self, no):
        a=self.real-no.real
        b=self.imaginary-no.imaginary
        if a<0 and b<0:
            return ("-%.2f-%.2fi"%(abs(a),abs(b)))
        elif a>=0 and b<0:
            return ("%.2f-%.2fi"%(abs(a),abs(b)))
        elif a<0and b>=0:
            return ("-%.2f+%.2fi"%(abs(a),abs(b)))
        elif a>=0and b>=0:
            return ("%.2f+%.2fi"%(abs(a),abs(b)))
    
    def __mul__(self, no):
        a=self.real*no.real-self.imaginary*no.imaginary
        b=no.imaginary*self.real+self.imaginary*no.real
        if a<0 and b<0:
            return ("-%.2f-%.2fi"%(abs(a),abs(b)))
        elif a>=0 and b<0:
            return ("%.2f-%.2fi"%(abs(a),abs(b)))
        elif a<0and b>=0:
            return ("-%.2f+%.2fi"%(abs(a),abs(b)))
        elif a>=0and b>=0:
            return ("%.2f+%.2fi"%(abs(a),abs(b)))
    def __truediv__(self, no):
        x=no.real**2+no.imaginary**2
        a=(self.real*no.real+self.imaginary*no.imaginary)/x
        b=(-no.imaginary*self.real+self.imaginary*no.real)/x
        if a<0 and b<0:
            return ("-%.2f-%.2fi"%(abs(a),abs(b)))
        elif a>=0 and b<0:
            return ("%.2f-%.2fi"%(abs(a),abs(b)))
        elif a<0and b>=0:
            return ("-%.2f+%.2fi"%(abs(a),abs(b)))
        elif a>=0and b>=0:
            return ("%.2f+%.2fi"%(abs(a),abs(b)))
        
    def mod(self):
        a=pow(self.real**2+self.imaginary**2, 0.5)
        b=0
        if a<0 and b<0:
            return ("-%.2f-%.2fi"%(abs(a),abs(b)))
        elif a>=0 and b<0:
            return ("%.2f-%.2fi"%(abs(a),abs(b)))
        elif a<0and b>=0:
            return ("-%.2f+%.2fi"%(abs(a),abs(b)))
        elif a>=0and b>=0:
            return ("%.2f+%.2fi"%(abs(a),abs(b)))
            
if __name__ == '__main__':
    c = map(float, input().split())
    d = map(float, input().split())
    x = Complex(*c)
    y = Complex(*d)
    print(*map(str, [x+y, x-y, x*y, x/y, x.mod(), y.mod()]), sep='\n')
