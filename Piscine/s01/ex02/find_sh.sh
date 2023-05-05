find . -type f -iname "*.sh" -execdir echo {} ';' | sed 's/\.sh//'
