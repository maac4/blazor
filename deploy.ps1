# Executa a publicação
dotnet publish -c Release

# Cria o arquivo .nojekyll
New-Item -Path "./docs/.nojekyll" -ItemType "file" -Force

# Copia os arquivos publicados para o diretório /docs
Copy-Item -Path "./bin/Release/net8.0/publish/wwwroot/*" -Destination "./docs/" -Recurse -Force

# Faz backup do index.html e atualiza o <base href>
$FILE = "./docs/index.html"
Copy-Item -Path $FILE -Destination "$FILE.bak"
(Get-Content $FILE) -replace '<base href="/" />', '<base href="https://maac4.github.io/blazor/" />' | Set-Content $FILE

# Faz commit e push das alterações
git commit -am "Deploy from CLI"
git push