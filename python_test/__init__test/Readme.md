### How to use __init__.py
1. If don't use __init__ ,the dirctory can't use like a module. We try to remove __init__.py in dir 'client', We got this
```
import client.func
if __name__ == '__main__':
    client.func.func()
```

```
未找到 'pytohn' 命令，您要输入的是否是：
 命令 'python' 来自于包 'python-minimal' (main)
 命令 'python' 来自于包 'python3' (main)
pytohn：未找到命令
```

```
from client import func
if __name__ == '__main__':
    client.func.func()
```
```
ceback (most recent call last):
  File "main.py", line 2, in <module>
    import client.func
ImportError: No module named client.func``
```

2. We put __init__.py into client ,even if it was a empty file ,we may get de 'hello world'

> so __init__.py make a dictory into module

