#include "apk/sortfilterproxymodel.h"

ResourceItemsModel *SortFilterProxyModel::sourceModel() const
{
    return static_cast<ResourceItemsModel *>(QSortFilterProxyModel::sourceModel());
}

bool SortFilterProxyModel::replaceResource(const QModelIndex &index, const QString &path)
{
    return sourceModel()->replaceResource(mapToSource(index), path);
}

bool SortFilterProxyModel::removeResource(const QModelIndex &index)
{
    return sourceModel()->removeResource(mapToSource(index));
}

QString SortFilterProxyModel::getResourcePath(const QModelIndex &index) const
{
    return sourceModel()->getResourcePath(mapToSource(index));
}
