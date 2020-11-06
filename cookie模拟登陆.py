

from urllib import request
dapeng_url='http://www.renren.com/880151247/profile'
headers={'User-Agent':'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/65.0.3325.181 Safari/537.36',
         'Cookie':'anonymid=k9qo9805-in36hz; depovince=GS; _r01_=1; JSESSIONID=abcUfQxaUGS774D9Tnzhx; taihe_bi_sdk_uid=08174b1a668ca49aaf84d21128c17a7d; taihe_bi_sdk_session=fd3396746f5828370c3613f4a6cde71b; ick_login=eb30238f-ecd8-439f-a5d7-3a5c61738341; t=4a527c04657767b854c5075b2d022bf88; societyguester=4a527c04657767b854c5075b2d022bf88; id=974355748; xnsid=26c8c385; ver=7.0; loginfrom=null; wp_fold=0; jebecookies=46792014-7444-472a-9368-2bc5b6311eb6|||||; jebe_key=3148be22-3b9d-48c4-9fda-06512f0a107b%7Cc67734be19032883f7adcb58a3d69a08%7C1588487228605%7C1%7C1588487227952; jebe_key=3148be22-3b9d-48c4-9fda-06512f0a107b%7Cc67734be19032883f7adcb58a3d69a08%7C1588487228605%7C1%7C1588487227955'
        }
dapeng_response=request.urlopen(request.Request(dapeng_url,headers=headers))
print(dapeng_response.read().decode('utf-8'))
