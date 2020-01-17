# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
tag_filter = re.compile(r"(?<=<)(?:.*?)(?=>)")
attrib_filter = re.compile(r"([\w-]+)(?:=[\"'](.*?)[\"'])?")

s = ""

# get input stream
for _ in range(int(input())):
    s += input()

# discard comments
s = re.sub(r"(?:<!--(.|\s)*?(?:-->))","",s)

# extract individual tag information
tags = tag_filter.findall(s)

# iterate over the extracted tag information
for tag in tags:
    # tag handling logic
    if tag[0] == "/":
        print("End   :",tag[1:])
    else:
        attribs = attrib_filter.findall(tag)
        if tag[-1] == "/":
            print("Empty :",attribs[0][0])
        else:
            print("Start :",attribs[0][0])
            
        for i in range(1,len(attribs)):
            a = attribs[i][0]
            if attribs[i][1] == '': 
                v = 'None' 
            else: 
                v = attribs[i][1]
            print("-> {} > {}".format(a,v))
