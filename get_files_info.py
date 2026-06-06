import os
from datetime import datetime, timedelta

class_dir = r'd:\ANUBHAB\CODES\Python\class'
today = datetime.now().date()

files_info = []
for f in os.listdir(class_dir):
    if f.endswith('.py'):
        filepath = os.path.join(class_dir, f)
        mtime = datetime.fromtimestamp(os.path.getmtime(filepath)).date()
        files_info.append((f, mtime))

files_info.sort(key=lambda x: x[1], reverse=True)

for f, mtime in files_info:
    days_ago = (today - mtime).days
    print(f'{f:30} | {mtime} ({days_ago} days ago)')
