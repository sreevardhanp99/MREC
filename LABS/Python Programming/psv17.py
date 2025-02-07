from urllib.request import urlopen
url = urlopen("https://www.python.org/")
print(url.read())