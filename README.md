# Logit4C

Records what you want from your C source code



## How to use?

Simple. Just import to you file:
`#import "logit.h"`

And call to logit function:
```
char* data;
data = "Hello World :)";
logit(data, _F_); 

data = "Is an amazing day to coding :D";
logit(data, _F_); 
```

It create a log file and print inner as follow:

```
Tue Feb 02 13:31:55 2016  | main - Hello World :)
Tue Feb 02 13:31:55 2016  | main - Is an amazing day to coding :D
```

Adding a timestamp and function name where was called logit function.
