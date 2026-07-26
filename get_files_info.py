from datetime import datetime
from pathlib import Path

repo_root = Path(__file__).resolve().parent
class_dir = repo_root / "Python" / "class"

today = datetime.now().date()

files_info = []
for path in sorted(class_dir.iterdir()):
    if path.is_file() and path.suffix == ".py":
        mtime = datetime.fromtimestamp(path.stat().st_mtime).date()
        files_info.append((path.name, mtime))

files_info.sort(key=lambda item: item[1], reverse=True)

for filename, mtime in files_info:
    days_ago = (today - mtime).days
    print(f"{filename:<30} | {mtime} ({days_ago} days ago)")
