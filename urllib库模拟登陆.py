from urllib import request
from http.cookiejar import CookieJar
from urllib import parse
class Renren_spider():
    login_url='http://www.renren.com/PLogin.do'
    dapeng_url='http://www.renren.com/880151247/profile'
    headers={'User-Agent':'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/65.0.3325.181 Safari/537.36',
    }
    def get_opener(self):
        cookiejar=CookieJar()
        handler=request.HTTPCookieProcessor(cookiejar)
        opener=request.build_opener(handler)
        return opener
    def visit(self,opener):
        response_dapeng=self.opener.open(request.Request(Renren_spider.dapeng_url,Renren_spider.headers=headers))
        print(response_dapeng.read().decode('utf-8'))
    def logo_renren(self,opener):
        data={
            'email':"17797693124",
            'password':"zzq339176"
            }
        self.opener.open(request.Request(Renren_spider.login_url,data=parse.urlencode(data).encode('UTF-8'),Renren_spider.headers=headers)
renren_spider=Renren_spider()
renren_spider.go()