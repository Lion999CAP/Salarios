#ifndef ACERCA_H
#define ACERCA_H

#include <QDialog>

namespace Ui {
class Acerca;
}

class Acerca : public QDialog
{
    Q_OBJECT

public:
    explicit Acerca(QWidget *parent = nullptr);
    ~Acerca();

    void setM_version(const QString &newM_version);

    void setVersion(const QString &newVersion);

private:
    Ui::Acerca *ui;
    QString m_version;
};

#endif // ACERCA_H
