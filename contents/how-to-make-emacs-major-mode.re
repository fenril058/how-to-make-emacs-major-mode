= まずはじめに読むべきDcoument
EmacsのMajor modeには変数名やキーバインドにさまざまな慣習があるので、
まずはそれらを確認すべきである。

Emacsは自身のManualを @<code>{M-x info} から読むことができるので、
まずはMajor Modeの項目を確認しよう.

//warn{
設定によっては @<code>{M-x info} しても、Emacs自身のManualがでてこないことがある。
大抵の場合それは環境変数INFOPATHが設定されており、その最後が@<code>{path-separator}
(通常は":")で終わっていないことに原因がある。筆者はこの罠に何度かはまっている。
EmacsがどこのInfo fileを探すかは@<code>{Info-directory-list}のHelpに詳細が載っているので、
@<code>{M-x describe-variable Info-directory-list}で確認してほしい。
//}
