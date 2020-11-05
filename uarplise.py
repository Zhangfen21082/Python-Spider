from urllib import request
from urllib import parse
url='http://www.baidu.com/s?wd=python&username=abc#1'
result=parse.urlparse(url)
print(result)
print('scheme','=',result.scheme)
print('netloc','=',result.netloc)
print('path','=',result.path)
print('query','=',result.query)
print('fragment','=',result.fragment)
