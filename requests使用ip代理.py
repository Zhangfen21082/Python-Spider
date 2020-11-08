import requests
proxy={
    'http':'http://105.27.238.161:8080'

}
response=requests.get('http://httpbin.org/ip',proxies=proxy)
print(response.content)