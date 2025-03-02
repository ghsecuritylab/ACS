/*********************************************************************
*               SEGGER MICROCONTROLLER GmbH & Co. KG                 *
*       Solutions for real time microcontroller applications         *
**********************************************************************
*                                                                    *
*       (c) 2015 - 2016  SEGGER Microcontroller GmbH & Co. KG        *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
*                                                                    *
*       SEGGER SystemView * Real-time application analysis           *
*                                                                    *
**********************************************************************
*                                                                    *
* All rights reserved.                                               *
*                                                                    *
* * This software may in its unmodified form be freely redistributed *
*   in source form.                                                  *
* * The source code may be modified, provided the source code        *
*   retains the above copyright notice, this list of conditions and  *
*   the following disclaimer.                                        *
* * Modified versions of this software in source or linkable form    *
*   may not be distributed without prior consent of SEGGER.          *
*                                                                    *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS "AS IS" AND     *
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,  *
* THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A        *
* PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL               *
* SEGGER Microcontroller BE LIABLE FOR ANY DIRECT, INDIRECT,         *
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES           *
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS    *
* OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS            *
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,       *
* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING          *
* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS *
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.       *
*                                                                    *
**********************************************************************
*                                                                    *
*       SystemView version: V2.40                                    *
*                                                                    *
**********************************************************************
-------------------------- END-OF-HEADER -----------------------------

File    : SEGGER_SYSVIEW_RTThread.h
Purpose : Interface between RT-Thread and System View.
Revision: $Rev: 3735 $
*/

#ifndef SYSVIEW_RTTHREAD_H
#define SYSVIEW_RTTHREAD_H

#include "rtthread.h"
#include "SEGGER_SYSVIEW.h"

/*********************************************************************
*
*       Defines, configurable
*
**********************************************************************
*/

/*********************************************************************
*
*       Defines, fixed
*
**********************************************************************
*/
#ifdef PKG_USING_SYSTEMVIEW
	#define SYSVIEW_EVENTID_OFFSET      PKG_SYSVIEW_EVENTID_OFFSET
#else
	#define SYSVIEW_EVENTID_OFFSET     (32u)
#endif

#define RTT_TRACE_ID_OFFSET           (32u)

#define RTT_TRACE_ID_SEM_BASE         (40u)
#define RTT_TRACE_ID_SEM_TRYTAKE      ( 1u + RTT_TRACE_ID_SEM_BASE)
#define RTT_TRACE_ID_SEM_TAKEN        ( 2u + RTT_TRACE_ID_SEM_BASE)
#define RTT_TRACE_ID_SEM_RELEASE      ( 3u + RTT_TRACE_ID_SEM_BASE)

#define RTT_TRACE_ID_MUTEX_BASE       (50u)
#define RTT_TRACE_ID_MUTEX_TRYTAKE    ( 1u + RTT_TRACE_ID_MUTEX_BASE)
#define RTT_TRACE_ID_MUTEX_TAKEN      ( 2u + RTT_TRACE_ID_MUTEX_BASE)
#define RTT_TRACE_ID_MUTEX_RELEASE    ( 3u + RTT_TRACE_ID_MUTEX_BASE)

#define RTT_TRACE_ID_EVENT_BASE       (60u)
#define RTT_TRACE_ID_EVENT_TRYTAKE    ( 1u + RTT_TRACE_ID_EVENT_BASE)
#define RTT_TRACE_ID_EVENT_TAKEN      ( 2u + RTT_TRACE_ID_EVENT_BASE)
#define RTT_TRACE_ID_EVENT_RELEASE    ( 3u + RTT_TRACE_ID_EVENT_BASE)

#define RTT_TRACE_ID_MAILBOX_BASE     (70u)
#define RTT_TRACE_ID_MAILBOX_TRYTAKE  ( 1u + RTT_TRACE_ID_MAILBOX_BASE)
#define RTT_TRACE_ID_MAILBOX_TAKEN    ( 2u + RTT_TRACE_ID_MAILBOX_BASE)
#define RTT_TRACE_ID_MAILBOX_RELEASE  ( 3u + RTT_TRACE_ID_MAILBOX_BASE)

#define RTT_TRACE_ID_QUEUE_BASE       (80u)
#define RTT_TRACE_ID_QUEUE_TRYTAKE    ( 1u + RTT_TRACE_ID_QUEUE_BASE)
#define RTT_TRACE_ID_QUEUE_TAKEN      ( 2u + RTT_TRACE_ID_QUEUE_BASE)
#define RTT_TRACE_ID_QUEUE_RELEASE    ( 3u + RTT_TRACE_ID_QUEUE_BASE)

int rt_trace_init(void);

#endif

/*************************** End of file ****************************/
