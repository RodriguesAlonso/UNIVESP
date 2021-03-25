from django.db import models
from django.contrib.auth.models import User

## class for storage the posts
class Post(models.Model):
    title = models.CharField(max_length=255)#size title
    slug = models.SlugField(max_length=255, unique=True) #URL TEXT for posts
    author = models.ForeignKey(User, on_delete=models.CASCADE) #Author tem um id quando o Author é deletados todos seus posts são deletados.
    body = models.TextField()
    created = models.DateTimeField(auto_now_add=True) #data creada automática quando um post é criado.
    update = models.DateTimeField(auto_now=True) 