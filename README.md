# Introduction #

Simple Host Universal Konfiguration Protocol (shukp)

自從Google Code決定關閉之後，在下所有亂七八糟的專案舉家搬到Github。

於此同時，大部分都塞進draft/legacy裡面，表示象徵性的封存。

其中，shukp一直是在下惦記著的遺憾。

隔了六到七年，興奮地打開專案，希望將原有的初衷發揚光大。

沒想到這一舉動，竟彷彿打開時光膠囊似的勾起許多少時回憶。

年輕的痕跡佈滿整個專案，每一行代碼都能讓人想起當時的對話。

雖然現在肯定可以處理得更好，但想了想，決定讓它再次封存。

而且現在還有ansible可以用，shukp顯得就沒這麼前衛了。

不負責任的設計圖：

+----------------+          +-----------------+
| client (local) |          | server (remote) |
+----------------+          +-----------------+
        |                            |
        |          VERSION           |
	| <------------------------> |
        |                            |
        |          API KEY           |
	| <------------------------> |
        |                            |
        |    META-DATA (env vars)    |
	| <------------------------> |
        |                            |
        |          COMMANDS          |
	| <------------------------> |
        |                            |

COMMANDS: RESET, QUIT, DATA, arbitary commands

一如往常，shuk是一個朋友的名字，不具其他特別意義。

2018.09.19
