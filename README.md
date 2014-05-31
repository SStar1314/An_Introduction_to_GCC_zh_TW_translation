# An Introduction to GCC 非官方正體中文版<br />An Introduction to GCC Unofficial zh_TW Version
## 這是什麼？<br />What is this?
這是 Brian Gough 著作的 An Introduction to GCC（位於 [http://www.network-theory.co.uk/docs/gccintro/](http://www.network-theory.co.uk/docs/gccintro/)） 書的非官方正體中文版本  
This is unofficial zh_TW version of "An Introduction to GCC" book written by Brian Gough @ [http://www.network-theory.co.uk/docs/gccintro/](http://www.network-theory.co.uk/docs/gccintro/)

在本 Git 內容倉庫中Ｖ字龍&lt;pika1021@gmail.com&gt; 將此書翻譯為正體中文版本  
In this Git content repository, Vdragon&lt;pika1021@gmail.com&gt; translated it to zh_TW version.

（直接或間接）使用 Debian 官方軟體來源作為軟體來源的作業系統散佈版本（如 Debian、Ubuntu、Linux Mint 等）的使用者可以安裝 gccintro 軟體包將電子書安裝到系統中，電子書將被安裝至下列目錄：
`````
/usr/share/doc/gccintro
`````
要注意的是此版本電子書相對於官方版本有新增一些內容，請參考[常見問題與回答 2.](#2-我透過-debian-官方軟體來源提供的-gccintro-軟體包使用電子書為何第-8-章以後的內容和程式碼倉庫中的不相同) 之說明。

## 授權條款<br />License
這份內容倉庫的內容來自採用 [GNU Free Documentation License](http://www.gnu.org/copyleft/fdl.html) 1.2 版授權條款的書，因此本衍伸作品亦使用相同的授權方式。  
The content of this repository is originally from the book licensed under [GNU Free Documentation License](http://www.gnu.org/copyleft/fdl.html) version 1.2, since then this derivative work is licensed as-is.

## 本書原官方網站<br />The original official site of this book
[http://www.network-theory.co.uk/download/gccintro/](http://www.network-theory.co.uk/download/gccintro/)

## 開發進度<br />Developing progress
目前所有範例程式碼都已經加入本內容倉庫中

## 下一個里程碑<br />Next milestone
將電子書全部內容拉近 Git 內容倉庫，變成一個完整的 An Introduction to GCC 電子書正體中文版本！

## 常見問題與回答<br />Frequently asked questions and answers
### 1. 我是貢獻者，在 git status/commit 等命令中無法正常顯示中文字元（顯示為 escape 字元序列如 \347、\267 等）該如何解決？
您可以透過下列命令讓 Git 在**這個內容倉庫中**正常顯示非 ASCII 字元
````
$ git config core.quotepath false
````
如果您要在**所有地方**皆能正常顯示請加上 --global 命令列參數
````
$ git config --global core.quotepath false
````

### 2. 我透過 Debian 官方軟體來源提供的 gccintro 軟體包使用電子書，為何第 8 章以後的內容和內容倉庫中的不相同？
Debian 提供的版本新增了 Security enhancement options 章節於原來的第 8 章，官方版本的第 8 章自 Debian 版本的第 9 章繼續接續下去，為了避免造成官方版本使用者的混淆本內容倉庫將 Debian 插入的章節分離為「Debian 修正版 &lt;原章節標題&gt;」
