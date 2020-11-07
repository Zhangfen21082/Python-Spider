from urllib import request
from http.cookiejar import MozillaCookieJar
cookiejar=MozillaCookieJar('cookie.txt')
cookiejar.load(ignore_discard=True)
handler=request.HTTPCookieProcessor(cookiejar)
opener=request.build_opener(handler)

response=opener.open('http://httpbin.org/cookies/set?course=python')
for cookie in cookiejar:
    print(cookie)








# cookiejar.save(ignore_discard=True)