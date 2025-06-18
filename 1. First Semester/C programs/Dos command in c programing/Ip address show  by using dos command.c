

/* To see this feature you most have connected any wifi network to see the ip of that network */

#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

int main()
{

    system("C:\\windows\\system32\\ipconfig");



}
/*output:
Without wifi connectio:

Windows IP Configuration


Ethernet adapter Ethernet:

   Media State . . . . . . . . . . . : Media disconnected
   Connection-specific DNS Suffix  . :

Wireless LAN adapter Wi-Fi:

   Media State . . . . . . . . . . . : Media disconnected
   Connection-specific DNS Suffix  . :

Wireless LAN adapter Local Area Connection* 1:

   Media State . . . . . . . . . . . : Media disconnected
   Connection-specific DNS Suffix  . :


   After connected wifi:

Windows IP Configuration


Ethernet adapter Ethernet:

   Media State . . . . . . . . . . . : Media disconnected
   Connection-specific DNS Suffix  . :

Wireless LAN adapter Local Area Connection* 1:

   Media State . . . . . . . . . . . : Media disconnected
   Connection-specific DNS Suffix  . :

Wireless LAN adapter Wi-Fi:

   Connection-specific DNS Suffix  . :
   Link-local IPv6 Address . . . . . : fe80::.........
   IPv4 Address. . . . . . . . . . . : 192.168.......
   Subnet Mask . . . . . . . . . . . : 255...0
   Default Gateway . . . . . . . . . : 192.168....

Explaination:
To see the ip address of hosted network
you have to connect any network to see

*/
