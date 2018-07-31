find . -name "*.sh" | awk 'sub("...$", "")' | sed 's/.*\///'

