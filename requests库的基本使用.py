import requests
headers={
    'User-Agent':'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/65.0.3325.181 Safari/537.36'
}
response=requests.get("http://wljx.gsau.edu.cn/meol/jpk/course/layout/lesson/index.jsp?courseId=14911",headers=headers)
print(response.content.decode('utf-8'))



















with open('baidu.html','w',encoding='utf-8') as fp:
    fp.write(response.content.decode('utf-8'))