#################### WAVE #################### 
Wave is a technical analysis software with charting, back-testing, 
scanning of stocks/futures and free quotes features. 

It is developed by νίĻάş ήίήάώέ to learn and improve trading skills.

##### Features of Software:
1. Practice technical analysis on historical data
2. Generate buy/sell signal from live data from popular strategies
3. Maintain practice and live record
4. Backtesting strategies
5. Free Eod data feed from nse
6. Live data feed from NSE, Yahoo, ETimes etc.

Visit website for more information: 
https://sites.google.com/view/wave4traders

### Run on Windows ###
$ cd wave-win
$ copy /b runtime\\jre_win64\\lib\\modules_aa+runtime\\jre_win64\\lib\\modules_ab+runtime\\jre_win64\\lib\\modules_ac runtime\\jre_win64\\lib\\modules
$ start runtime\\jre_win64\\bin\\javaw.exe --module-path runtime\\jre_win64\\javafx-sdk-16\\lib --add-modules javafx.controls,javafx.fxml,javafx.web -jar runtime\\bin\\wave

### Run on Linux ###
$ cd wave-linux
$ cat runtime/jre_linux64/lib/modules_aa runtime/jre_linux64/lib/modules_ab runtime/jre_linux64/lib/modules_ac > runtime/jre_linux64/lib/modules
$ runtime/jre_linux64/bin/java --module-path runtime/jre_linux64/javafx-sdk-16/lib --add-modules javafx.controls,javafx.fxml,javafx.web -jar runtime/bin/wave

### Run on Mac ###
$ cd wave-mac
$ cat runtime/jre_mac64/Contents/Home/lib/modules_aa runtime/jre_mac64/Contents/Home/lib/modules_ab runtime/jre_mac64/Contents/Home/lib/modules_ac > runtime/jre_mac64/Contents/Home/lib/modules
$ runtime/jre_mac64/Contents/Home/bin/java --module-path runtime/jre_mac64/javafx-sdk-16/lib/ --add-modules javafx.controls,javafx.fxml,javafx.web -jar runtime/bin/wave

#################### END #####################
