from urllib.request import urlopen, HTTPError, URLError
try:
     myURL = urlopen("'https://www.python.org/")
except HTTPError as e:
     print('Error code: ', e.code)
except URLError as e:
     print('URL error: ', e.reason)
else:
     print('We have not found any error in URL.')