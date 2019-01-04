# coding=utf-8
class Person():
 
    def __init__(self, name, age):
        self.name = name
        self.age = age
        self.weight = 'weight'
        print("Person init",self.name," ",self.age," ",self.weight)
 
    def talk(self):
        print("person is talking....")
 
 
class Chinese(Person):
 
    def __init__(self, name, age, language="Chinese"):  # 先继承，在重构
        Person.__init__(self, name, age)  #继承父类的构造方法，也可以写成：super(Chinese,self).__init__(name,age)
        self.language = language    # 定义类的本身属性
        print("Chinese init",self.name," ",self.age," ",self.weight,self.language)

    def walk(self):
        print('is walking...')
 
 
class American(Person):
    pass
 
c = Chinese('bigberg', 22)
c = American('berg', 22)
#c = Chinese('bigberg', 22)

