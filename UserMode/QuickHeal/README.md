QuickHeal
=========
CVE-2017-5005 for Quick Heal Antivirus


Advisory
--------
**Improper Restriction of Operations** within the **Bounds of a Memory Buffer** vulnerability.

The software performs operations on a memory buffer, but it can read from or write to a memory location that is outside of the intended boundary of the buffer.


Vulnerability Description
-------------------------
We found that the **Quick Heal Internet Security** is vulnerable to **Out of Bound Write on Stack Buffer** due to improper validation of `LC_UNIXTHREAD.cmdsize` (**Mach-O**).

This vulnerability can be exploited to gain **Remote Code Execution** as well as **Privilege Escalation**.


Proof of Concept
----------------
[![Quick Heal Exploit Demo](https://img.youtube.com/vi/h9LOsv4XE00/0.jpg)](https://www.youtube.com/watch?v=h9LOsv4XE00)


Vendor
------
[http://www.quickheal.co.in/](http://www.quickheal.co.in/)


Products
--------
 * Quick Heal Internet Security 10.1.0.316 and prior
 * Quick Heal Total Security 10.1.0.316 and prior
 * Quick Heal AntiVirus Pro 10.1.0.316 and prior


Disclosure Timeline
-------------------
 * 09 June 2016 – Reported to vendor
 * 11 June 2016 – Received acknowledgement from vendor & Patch released


Author
------
> **Ashfaq Ansari**

> ashfaq[at]payatu[dot]com

> **[@HackSysTeam](https://twitter.com/HackSysTeam) | [Blog](http://hacksys.vfreaks.com/ "HackSys Team") | [null](http://null.co.in/profile/411-ashfaq-ansari)**

> ![Payatu Technologies](http://www.payatu.com/wp-content/uploads/2015/04/Payatu_Logo.png "Payatu Technologies Pvt. Ltd.")

> [http://www.payatu.com/](http://www.payatu.com/ "Payatu Technologies Pvt. Ltd.")


License
-------
Please see the file `LICENSE` for copying permission


------------------------------------------------------------------------
[http://hacksys.vfreaks.com](http://hacksys.vfreaks.com)

![HackSys Team](http://hacksys.vfreaks.com/wp-content/themes/Polished/images/logo.png)
