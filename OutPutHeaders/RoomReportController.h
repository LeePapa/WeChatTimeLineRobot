/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class CContact;

@interface RoomReportController : XXUnknownSuperclass {
	CContact* m_oChatContact;
	unsigned m_uiStayTime;
	unsigned m_uiUnReadCount;
	unsigned m_uiReceiveCount;
	unsigned m_uiSendCount;
	timeval m_tvStart;
	BOOL m_bReport;
	BOOL m_bStart;
}
-(void).cxx_destruct;
-(void)report;
-(void)report:(BOOL)report;
-(void)addMsg:(id)msg;
-(unsigned long)getStayTime;
-(void)setStartTime;
-(void)willTerminate:(id)terminate;
-(void)willEnterForeground:(id)foreground;
-(void)didEnterBackground:(id)background;
-(void)dealloc;
-(id)initWithChatContact:(id)chatContact UnReadCount:(unsigned)count;
@end
