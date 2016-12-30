/*
« Copyright 2016 Gilles Thomassin <gthomassingap@gmail.com> »

 This file is part of GapMea.

    GapMea is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, version 3.

    GapMea is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with GapMea.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "query.h"

query::query(dialogRelation* mum,QString nom,qreal x,qreal y, QGraphicsItem* parent, QCustomGraphicsScene * laScene, QStringList listeDesChamps,QString requete,QString pAlias)
        :table(mum,nom,x,y,parent,laScene,listeDesChamps)

{
    sql=requete;
    alias=pAlias;
}
