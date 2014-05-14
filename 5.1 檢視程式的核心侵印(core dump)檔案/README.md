# 5.1 檢視程式的核心侵印(core dump)檔案/
## 常見問題與解答
### 為何在 Ubuntu 下沒有在當前工作目錄建立程式的核心侵印(core dump)檔案？
Ubuntu 預設使用 Apport 來處理程式的 core dump （而且只處理 Ubuntu 提供的軟體包的程式），而非將 core dump 直接放在程式運行的當前工作目錄(current working directory)中。您可以用下列命令暫時讓 core dump 放在程式運行的當前工作目錄(current working directory)中：
````
# sudo sysctl kernel.core_pattern="core"
````
此設定方式於系統重新啟動後會失效。