from django.db import models
class Book(models.Model):
    name = models.CharField(maxlength=50)
    pub_date = models.DateField()
# views.py (the business logic)
from django.shortcuts import render_to_response
from models import Book
def latest_books(request):
    book_list = Book.objects.order_by('-pub_date')[:10]
    return render_to_response('latest_books.html', {'book_list': book_list})
# urls.py (the URL configuration)
from django.conf.urls.defaults import *
import views
urlpatterns = patterns('',
(r'latest/$', views.latest_books),
)