#include "httpout.hpp"

HttpOutboundEditor::HttpOutboundEditor(QWidget *parent) : Qv2rayPlugin::Gui::PluginProtocolEditor(parent)
{
    setupUi(this);
    setProperty("QV2RAY_INTERNAL_HAS_STREAMSETTINGS", true);
}

void HttpOutboundEditor::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type())
    {
        case QEvent::LanguageChange: retranslateUi(this); break;
        default: break;
    }
}

void HttpOutboundEditor::on_http_UserNameTxt_textEdited(const QString &arg1)
{
    http.user = arg1;
}
void HttpOutboundEditor::on_http_PasswordTxt_textEdited(const QString &arg1)
{
    http.pass = arg1;
}
