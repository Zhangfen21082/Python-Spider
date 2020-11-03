from urllib import request
url='http://httpbin.org/ip'
# headers={
#     'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.113 Safari/537.36'
# }
# resp=request.urlopen(request.Request(url,headers=headers))
# print(resp.read().decode('utf-8'))
# resp=request.urlopen(url)
# print(resp.read())
handler=request.ProxyHandler({"http":"1.198.108.190:9999"})
opener=request.build_opener(handler)
respond=opener.open(url)
print(respond.read())