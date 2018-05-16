# -*- coding: utf-8 -*-
# Generated by Django 1.10 on 2018-05-13 10:59
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Produto',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('nome', models.CharField(max_length=100)),
                ('descricao', models.TextField()),
                ('preco', models.DecimalField(decimal_places=2, max_digits=5)),
                ('quantidade', models.IntegerField()),
                ('publicado_em', models.DateField()),
            ],
        ),
    ]
