# Logit4C

Records what you want from your C source code



## How to use?

Simple. Just import to you file:
`#import "logit.h"`

And call to logit function:
```
char* data;
data = "Hello World :)";
logit(data, _F_, _L_); 

data = "Is an amazing day to coding :D";
logit(data, _F_, _L_); 
```

It create a log file and print inner as follow:

```
Wed Feb 03 16:49:52 2016  | main | 9 - Hello World :)
Wed Feb 03 16:49:52 2016  | main | 12 - Is an amazing day to coding :D
Wed Feb 03 16:49:52 2016  | main | 15 - And add a few new features :D
```

Adding a timestamp, function name and code line where logit() function was called. 

__Feel free to give pull request and improve this project.__
