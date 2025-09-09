---
aliases:
  - welcome
cssclasses:
  - welcome
tags:
  - cpp
  - cpp/enviroment
summary: C++ 接近硬件的高性能通用编程语言
---
# 设置 C++ 环境

## C++ 介绍

- 欢迎学习 C++ 课程，并祝贺您迈出了成为更好 C++ 开发者的第一步。

C++是一种非常强大的语言，可以用来做非常底层的事情。但是，在某些情况下，也非常适合用来做高级应用程序开发。C++ 由 Bjarne Stroustroup 创建的通用编程语言，最初是对 C 语言的扩展。现代 C++ 是一种多用途的编程语言，支持多种 **编写方式**

> [!tip] 
> 编程方式更学术的说法是 **编程范式**。
> + 面向过程编程
> + 面向对象编程
> + 泛型编程
> + 函数式编程
> 
> 这些编程范式在现代编程语言中都有它们的身影。但是，C++ 允许我们在接近硬件的情况下做这些事情
> 

使用 C++ 编写的应用程序可以运行在许多平台上，例如 Windows、MacOS、Linux。甚至，可以在移动设备上运行它们，也可以在小型嵌入式设备上运行 

在 [C++应用程序](https://www.stroustrup.com/applications.html) 中介绍了大量使用 C++ 开发的应用程序。例如微软的 Windows、MySQL 等的

### 接近硬件的 C++

我们已经知道 C++ 是接近硬件的编程语言。所谓的接近硬件就是指我们可以直接使用 C++ 控制硬件，而不需要通过中间程序降低程序的运行速度。

> [!hint] 
> 
> 接近底层硬件是 C++ 与 C 语言的共性。但是，C++ 提供更现代化的结构，可以使我们能够更块和更安全的方式编写应用程序
> 

从技术上来说，使用 $0$ 和 $1$ 编写程序并直接与硬件交互是可能的。但是，这会非常麻烦，而且很难编写任何实际应用程序。所以，人们创建了另一门编程语言；它更接近自然语言中英语；用这个新语言编写的程序会被一个称为**汇编器**的程序转化为硬件能够直接理解的 $0$ 和 $1$ 的序列；这个语言被称为汇编语言，它非常笨重，且和硬件一一对应(即，不具备可移植性)；例如，Intel 的 CPU 具有自己的汇编语言，Apple 的 CPU 具有自己的汇编语言，两者是不同的。因此，像 C 和 C++ 这种高级语言就被创造出来；它提供了高层次的结构，使得我们可以像书写英语语句那样编写程序，然后运行一个称为 **编译器** 的特殊的程序将其转换另一种语言

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757006438483-b9fb9884a9db4091a7a9aab8e9b706c9.png)

> [!tip] 
> 
> 简单的来讲，编译器和汇编器我们会统称为编译器，它会将 C/C++ 代码转化为可以直接在底层硬件上执行的机器代码
> 

在 C/C++ 被创建出来之后，就可以进一步简化一些事情。通过在硬件和编写的程序之间引入更多的层次。例如，Java 和 Python，这样就可以使用 Java 和 Python 更高效的做其他事情。Java 或 Python 程序隐藏了在硬件和实际运行程序之间的许多步骤

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757007210820-a8229592b9f84dc791812a61dccf1984.png)

可以想象，在某些情况下，这会程序运行会非常缓慢。因此，如果想要程序运行的更快，就需要使用 C 或者 C++ 编写程序并尽可能的使用接近硬件的特性。

### 现代 C++ 

C++ 分为 **经典 C++** 和 **现代 C++** 两种。其中，C++98 标准及以下的称为经典 C++；C++11 标准及以上的称为现代 C++

我们要学习的是现代 C++，即意味着学习 C++11 标准之后的 C++。因为，C++11 标准之后提供的新特性可以保证内存安全

## 环境设置

设置 C++ 开发环境的第一步就是需要一个 **编辑器**，它用于编写 C++ 代码。然后，还需要一个 **编译器**，它用于将 C++ 代码编译成机器指令

### 在 Windows 上设置 C++ 环境

编辑器我们选择 [visual studio code](https://code.visualstudio.com/)，因为它是开源跨平台的，这样我们在不同的平台上进行开发都会得到相同的界面展示

在 Windows 上，编译器可以选择可以有多种，例如 Mingw、MSVC、Clang llvm，这三种编译器的安装我们都会详细介绍

#### 安装 visual studio code

访问 [visual studio code](https://code.visualstudio.com/) 官网，我们会看见如下页面。它会自动检查当前平台，下载对应平台的安装包下一步安装即可

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757092771155-2a05088f5bb249f2b531cc2052238b1e.png)

visual studio code 安装完成还需要下载 **C/C++** 插件，该插件提供了识别 C++ 代码的能力。这样，使用 visual studio code 开发 C++ 程序是就可以提供代码提示和关键字高亮等辅助功能

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757094862920-80d5e8c13ef7442eafb1c622f04e940c.png)


#### 安装编译器

##### 安装 MSVC

MSVC 编译器在 [Visual Studio](https://visualstudio.microsoft.com/zh-hans/downloads/) 中提供，我们需要现在 Visual Studio 安装程序进行安装。访问 Visual Studio 官方网站，我们可以看见如下页面

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1755793161008-967a0905206a458a8cdc72f26a5453bc.png)

Visual Studio 提供了三个版本，作为学习用途，我们只需要选择社区版本即可。点击免费下载，等待安装程序下载完成

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1755793315274-c7d0b0083123434f91ffa54f7181152f.png)

双击该文件即可触发安装，一会之后就会展示如下界面

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1755793384861-d46414eaba224ecfb95778d5bab2fd5d.png)

点击继续，会出现如下界面

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1755793436200-dbf58ca599b64d12be8cc10044fcf77d.png)

此时会下载一些内容，等待下载结束会弹出如下页面

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1755793497758-fa83aa700d7d400a8e2ded9db77b9b9e.png)

滑动窗口，找到使用 C++ 的桌面开发选项，选择后点击右下角的安装按钮

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1755793603836-935e0650830b4aeca640d726a9fa3cef.png)

此时，就开始下载 MSVC 编译器等待下载完成即可

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1755793700441-3b3eb929de7f4c05993703e99cd547f1.png)

等待 MSVC 安装完后后，在开始菜单中搜索 `developer PowerShell for VS 2022`，

##### 安装 GCC 和 Clang

###### WinLibs

[WinLibs](https://winlibs.com/) 是适用于 Microsoft Windows 的免费 C 和 C++ 编译器，专注于构建可在 Windows 上原生运行的版本

多线程是现代程序必不可少的，目前由三种线程库 **POSIX** 、**WIN32** 和 **MCF**；其中 POSIX 是支持最广泛的标准，处于可移植性原因，WinLibs 采用 POSIX 标准的线程库支持 Windows 上的多线程编程

MinGW-w64 编译器使用 **MSVCRT** 作为运行时库，该库在所有版本的 Windows 上均可用。由于 Windows10 开始使用 **UCRT(通用 C 运行时)** 作为 MSVCRT 的替代品。因此，我们在选择安装 GCC 和 Clang 时选择 UCRT 作为运行时库就可以了

WinLibs 的每个版本都提供了两种风格：**Win32-i686** 和 **Win64-x86_64** 。显然，Win64 只能在 Windows 64 位机器上运行；而 Win32 既可以在 64 位机器也可以在 32 位机器上运行。我们选择 GCC 14.2.0，因为它包含了 GCC 和 Clang，这样就可以同时安装这两个编译器

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757173552659-dbfc92e4dc864718b19c2a9883c17bb1.png)

等待下载完成后，只需要解压之后配置环境变量即可

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757175219090-298646fcdc2e4aafb54796b43af93a0e.png)

设置好环境变量后，启动 Powershell 验证编译器是否安装完成，如下图所示

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757175423815-d19a719574964a249d8a735940496a1a.png)


###### Msys2

**[MSYS2](https://www.msys2.org/)** 是一组工具和库，它提供一个易于使用的环境来 **构建**、**安装** 和 **运行** 原生 Windows 软件。访问 Msys2 网站，下载 Msys2 的安装程序

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757186729769-d0dadfc641df4a218055c1b2c208ccba.png)

> [!tip] 
> MSYS2 最低要求 64 位的 Windows10 系统。

等待安装程序下载完成，然后启动安装程序，安装默认配置下一步安装即可。等待安装完成后，启动 `msys2` 终端，使用 `pacman` 命令安装 `mingw-w64-ucrt-x86_64-toolchain`  和 `mingw-w64-clang-x86_64-toolchain`

```powershell
pacman -S mingw-w64-ucrt-x86_64-toolchain mingw-w64-clang-x86_64-toolchain
```

安装完成后，还需要将 `ucrt` 和 `clang` 添加到环境变量中

#### 配置 visual studio code

##### 选择 C++ 标准

启动 visual studio code，然后同时按住 `ctrl + shift + p` 启动如下界面，然后在输入框中输入 `C/C++: Edit Configurations`，选中带有 `UI` 样式的选项

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757148233087-913653d7793d4caea30c7092d7e5b5dc.png)

向下找到 C++ 标准，然后选择 C++23

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757148325607-915bf1f5ac514bcca889785fa8f6ee3d.png)

##### 使用 MSVC 编译器

在 visual studio code 中，编译任务需要指定使用的编译器等选项。点击终端，然后选择配置任务

![|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757149627444-9418f4a0556641359aec06a4cb3ecade.png)

在选项框中选择 `C/C++:cl.exe 生成活动文件`。此时，visual studio code 会在当前目录中新建一个 `.vscode` 文件夹，其中包含了一个 `tasks.json` 文件

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757156855509-ad52133e0c0e4c1fbfd52943b84396a1.png)

> [!hint] 
> 
> 如果没有出现 `C/C++:cl.exe 生成活动文件` 选项，请确认是否时通过 `Developer Powershell for VS 2022` 启动的 visual studio code。如果不是则关闭 visual studio code 后重新启动
> 请注意：**每次启动 visual studio code 都需要通过 Developer Powershell for VS 2022**，否则 visual studio code 将无法获得 MSVC 编译器的位置

visual studio code 生成的默认文件需要进行一些列的调整。下面时调整过后的 `tasks.json` 文件的内容；后面的注释给出了修改后

```json
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "Build With MSVC",
			"command": "cl.exe",
			"args": [
				"/Zi",
				"/std:c++latest", // 使用最新版本的 C++ 标准
				"/EHsc",
				"/nologo",
				"/Fe${fileDirname}\\${fileBasenameNoExtension}.exe",
				"${file}"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$msCompile"
			],
			"group": "build",
			"detail": "编译器: cl.exe"
		}
	]
}
```

如果需要使用 MSVC 进行调试，如下图，可以让 visual studio code 自动创建一个 `launch.json` 文件，该文件中保存了调试程序的任务配置

![image.png|600](http://cdn.jsdelivr.net/gh/duyupeng36/images@master/obsidian/1757179321418-7694a298231946598afc2479544515c1.png)

```cpp
{
    "configurations": [
        {
            "name": "Debug With MSVC",
            "type": "cppvsdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "console": "integratedTerminal",
            "preLaunchTask": "Build With MSVC"
        }
    ],
    "version": "2.0.0"
}
```

##### 使用 GCC 和 Clang 编译器

配置 GCC 和 Clang 的步骤与 MSVC 类似。只需要注意不同编译的命令的不同即可

### 在 Linux 上设置 C++ 环境

在 Linux 发行版中，我们可以使用 GCC 和 Clang 编译器，它们的安装只需要使用发行版提供的包管理工具进行安装即可

> [!hint] 
> 通常情况下，系统默认已经安装好了 GCC 编译器

visual studio code 的安装与 Windows 类似，下载对应 Linux 版本的安装包使用包管理器安装即可。之后的配置与 Windows 中的类似

### 在 MacOS 上设置 C++ 环境

没有对应设备忽略
