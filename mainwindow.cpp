#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonSoma_clicked()
{
    try{
        TP2::Complexo aux1(ui->lineEditReal1->text().toFloat(),ui->lineEditImaginario1->text().toFloat());
        TP2::Complexo aux2(ui->lineEditReal2->text().toFloat(),ui->lineEditImaginario2->text().toFloat());
        TP2::Complexo resultado = aux1 + aux2;

        QString saida;
        saida = resultado.get();
        saida += "\n";

        ui->lineEditResposta->setText(saida);
        ui->labelN1->setText(aux1.get());
        ui->labelN2->setText(aux2.get());
    }catch(QString &erro){
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonSubtracao_clicked()
{
    try{
        TP2::Complexo aux1(ui->lineEditReal1->text().toFloat(),ui->lineEditImaginario1->text().toFloat());
        TP2::Complexo aux2(ui->lineEditReal2->text().toFloat(),ui->lineEditImaginario2->text().toFloat());
        TP2::Complexo resultado = aux1 - aux2;

        QString saida;
        saida = resultado.get();
        saida += "\n";

        ui->lineEditResposta->setText(saida);
        ui->labelN1->setText(aux1.get());
        ui->labelN2->setText(aux2.get());
    }catch(QString &erro){
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonMultiplicacao_clicked()
{
    try{
        TP2::Complexo aux1(ui->lineEditReal1->text().toFloat(),ui->lineEditImaginario1->text().toFloat());
        TP2::Complexo aux2(ui->lineEditReal2->text().toFloat(),ui->lineEditImaginario2->text().toFloat());
        TP2::Complexo resultado = aux1 * aux2;

        QString saida;
        saida = resultado.get();
        saida += "\n";

        ui->lineEditResposta->setText(saida);
        ui->labelN1->setText(aux1.get());
        ui->labelN2->setText(aux2.get());
    }catch(QString &erro){
        QMessageBox::information(this,"ERRO",erro);
    }
}



void MainWindow::on_pushButtonDivisao_clicked()
{
    try{
        TP2::Complexo aux1(ui->lineEditReal1->text().toFloat(),ui->lineEditImaginario1->text().toFloat());
        TP2::Complexo aux2(ui->lineEditReal2->text().toFloat(),ui->lineEditImaginario2->text().toFloat());
        TP2::Complexo resultado = aux1 / aux2;

        QString saida;
        saida = resultado.get();
        saida += "\n";

        ui->lineEditResposta->setText(saida);
        ui->labelN1->setText(aux1.get());
        ui->labelN2->setText(aux2.get());
    }catch(QString &erro){
        QMessageBox::information(this,"ERRO",erro);
    }
}



void MainWindow::on_pushButtonIgual_clicked()
{
    try{
    QString igual="Não são iguais";
    TP2::Complexo aux1(ui->lineEditReal1->text().toFloat(),ui->lineEditImaginario1->text().toFloat());
    TP2::Complexo aux2(ui->lineEditReal2->text().toFloat(),ui->lineEditImaginario2->text().toFloat());
    if(aux1==aux2)igual = "Iguais";
    ui->labelIgualdade->setText(igual);
    }catch(QString &erro){
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonDiferente_clicked()
{
    try{
    QString Diferentes="Não são diferentes";
    TP2::Complexo aux1(ui->lineEditReal1->text().toFloat(),ui->lineEditImaginario1->text().toFloat());
    TP2::Complexo aux2(ui->lineEditReal2->text().toFloat(),ui->lineEditImaginario2->text().toFloat());
    if(aux1!=aux2)Diferentes = "Diferentes";
    ui->labelIgualdade->setText(Diferentes);
    }catch(QString &erro){
        QMessageBox::information(this,"ERRO",erro);
    }
}
