# 說明

本專案是一個 C 程式的混淆版本，它應該輸出 「Hello world」。然而，由於刻意複雜的程式碼結構，結果可能難以預測：有時出現 「Hello world「，有時出現 」ERROR world「，有時出現 」Decoy output 」的垃圾郵件。建立這個專案的目的是為了展示混淆，並嘗試將簡單任務複雜化。

### 安裝

### 需求

- GCC 編譯器 (或類似編譯器)。
- Make 工具。
- 數學函式庫 (通常透過 `-lm` 旗標連接)。

### 安裝步驟

1. 克隆套件庫或複製檔案到您的工作目錄：

   ```bash
   git clone https://github.com/iforgot
   cd hello-world-c
   ```

   如果您沒有 Git，只需建立一個目錄並手動複製檔案即可。

2. 確保您已安裝必要的工具。在 Linux 或 macOS 上，請檢查

   ```bash
   gcc --version
   make --version
   ```

   如果缺少某些東西，請在 Ubuntu 上安裝，例如

   ````bash
   sudo apt-get install build-essential
   ```

3. 編譯專案：

   ````bash
   make
   ```

   這將建立 ``program`` 可執行檔案。

4. 執行程式：

   ```bash
   ./program
   ```

   您應該會看到包括 「Hello world」、「ERROR world」 或其他訊息的輸出。

## 專案結構

- `main.c`: 有入口點的主檔案。
- `string_utils.c` 和 `string_utils.h`: 用來處理字串的模組。
- `math_ops.c` 和 `math_ops.h`: 數學 o


(thanks to deepl and chatgpt for readme)