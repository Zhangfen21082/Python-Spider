import requests
url='http://www.renren.com/PLogin.do'
data={
    'email':'17797693124',
    'password':'zzq3391765'
}
headers={
    'User-Agent':'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/65.0.3325.181 Safari/537.36'
}
session=requests.session()
session.post(url,data=data,headers=headers)
response=session.get('http://www.renren.com/880151247/profile')
with open('sss.html','w',encoding='utf-8') as fp:fp.write(response.text)
