## MI

- 这里的多继承:

```Cpp
  class SingerWaiter :public Singer, public Waiter{
    ...
  }
```

将会非常复杂. 原因是,构造函数,甚至基类的方法都得被重写.


- 在祖先相同时，使用MI必须引入虚基类，并修改构造函数初始化列表的规则。另外，如果在编写这些类时没有考虑到MI，则还可能需要重新编写它们。

- 如果类有间接虚基类，则除非只需使用该虚基类的默认构造函数，否则必须显式地调用该虚基类的某个构造函数。

