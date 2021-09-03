echo "Escreva o texto do commit"
read varName
git add .
git commit -m "$varName"
git push
