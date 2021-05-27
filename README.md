### NOTE:
mlc is not actually a compiler, it's a translator

# mlc
mlc is the multi-language compiler, it compiles user defined languages into english for use in programming

a compile script for french might look something like this
```
mlc -Lfr.txt main-fr.c -o main-en.c
```

## why use mlc?
there are quite a few advantages of using mlc opposed to a translater, here are a few:

- an online translater might not always give the correct keywords
- it's fast and simple to use
- C is not the only language it can compile to, if you want python just set up a 'fr-python.txt' and use python keywords
