# gccintro 程式碼正體中文翻譯<br />gccintro_code zh_TW translation
這是一個內含 Brian Gough 著作的 An Introduction to GCC（位於 [http://www.network-theory.co.uk/docs/gccintro/](http://www.network-theory.co.uk/docs/gccintro/)） 書用到的程式碼範例的程式碼倉庫  
This is code repository contain code examples used in "An Introduction to GCC" book written by Brian Gough @ [http://www.network-theory.co.uk/docs/gccintro/](http://www.network-theory.co.uk/docs/gccintro/)

在本程式碼倉庫中Ｖ字龍&lt;pika1021@gmail.com&gt; 將此份程式翻譯為正體中文版本  
In this code repository, Vdragon&lt;pika1021@gmail.com&gt; translated it to zh_TW language.

## 授權條款<br />License
這份程式碼來自採用 [GNU Free Documentation License](http://www.gnu.org/copyleft/fdl.html) 1.2 版授權條款的書，因此本衍伸作品亦使用相同的授權方式。  
The code is originally from the book licensed under [GNU Free Documentation License](http://www.gnu.org/copyleft/fdl.html) version 1.2, since then this derivative work is licensed as-is.

## 官方範例來源程式碼位置<br />Official example source-code location
[http://www.network-theory.co.uk/download/gccintro/](http://www.network-theory.co.uk/download/gccintro/)

## 常見問題與回答<br />Frequently asked questions and answers
### 我是貢獻者，在 git status/commit 等命令中無法正常顯示中文字元（顯示為 escape 字元序列如 \347、\267 等）該如何解決？
您可以透過下列命令讓 Git 在**這個來源程式碼倉庫中**正常顯示非 ASCII 字元
````
$ git config core.quotepath false
````
如果您要在**所有地方**皆能正常顯示請加上 --global 命令列參數
````
$ git config --global core.quotepath false
````