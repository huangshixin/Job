【OSI】

open system interconnection references model  开放式系统互联互通模型


七层模型：【从下往上】

7 应用层 ： HTTP\FTP\等协议【为应用程序或用户请求提供各种请求服务】
6 表示层： 数据编码、格式转换、数据加密【在表示层提取应用层的数据】
5 会话层：创建、管理和维护会话【负责建立连接、维护会话、认证，并确保安全】
4 传输层：数据通信【传输层从网络层获取信息，接受信息】
3 网络层：IP选址即路由选择【数据从一台主机传输到位于不同网络中的另一台主机】
2 数据链路层：提供介质访问和链路管理【数据链路层负责节点到节点的消息传递】
1 物理层：管理通信设备和网络媒体之间的互联互通【物理层，负责信息在物理介质之间传输、接受非结构化数据】



TCP/IP四层模型

1、它包括许多协议，组成了TCP/IP协议簇，它是吧OSI七层模型简化成了五层


1、网络接口层

网路接口层进行硬件寻址，物理传输数据

2、网络层

定义了数据逻辑传输的协议。

3、传输层

TCP/IP 模型中的 transport layer 对应 OSI 模型中的 transport layer，负责端到端数据传输和错误控制。Transport layer 主要协议有面向连接的 TCP 协议、无链接的 UDP 协议

4、应用层： 包含OSI七层中的 应用层、表示层、会话层

TCP/IP模型中的应用层对应OSI模型中的应用层、表示层、会话层；负责节点到节点的通信。




五层模型：

TCP/IP 模型定义了应用层、传输层、网际层、网络接口层共四层，但并没有给出接口层的具体实现。
因此，通常将网络接口层替换为 OSI 七层模型中的数据链路层和物理层，这就是五层网络模型：


当用户请求访问网站时，服务器把请求的数据传递给 application layer。此时，从上层至下层各层根据约定执行相应操作，
数据通过物理层传递给接收者。接收者收到数据后，从底层向上传输，每层执行相应功能，直到发送给对应 app


































