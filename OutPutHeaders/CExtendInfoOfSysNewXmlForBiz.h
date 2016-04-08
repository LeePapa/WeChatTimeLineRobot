/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IMsgExtendOperation.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "NSCopying.h"
#import "IMessageWrapForBizExt.h"
#import "ISysNewXmlMsgExtendOperation.h"

@class NSMutableArray, NSMutableString, NSString, CMessageWrap;

@interface CExtendInfoOfSysNewXmlForBiz : XXUnknownSuperclass <IMessageWrapForBizExt, IMsgExtendOperation, ISysNewXmlMsgExtendOperation, NSCopying> {
	NSMutableString* m_showContent;
	NSMutableString* m_sessionShowContent;
	NSString* m_scene;
	NSMutableArray* m_arrMembers;
	NSString* m_qrCode;
	NSString* m_url;
	BOOL m_hasParsedForDisplay;
	CMessageWrap* m_refMessageWrap;
}
@property(assign, nonatomic) CMessageWrap* m_refMessageWrap;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_sessionShowContent;
@property(retain, nonatomic) NSString* m_url;
@property(retain, nonatomic) NSString* m_qrCode;
@property(retain, nonatomic) NSMutableArray* m_arrMembers;
@property(retain, nonatomic) NSString* m_scene;
@property(retain, nonatomic) NSString* m_showContent;
+(void)CreateExtendInfoWithTypeForBiz:(unsigned long)biz retExtendInfo:(id*)info;
-(void).cxx_destruct;
-(id)GetDisplaySessionContent;
-(id)GetDisplayContent;
-(void)ChangeForDisplay;
-(XmlReaderNode_t*)parseNextSibling:(XmlReaderNode_t*)sibling;
-(XmlReaderNode_t*)parseFirstChild:(XmlReaderNode_t*)child;
-(void)parseLinkNode:(XmlReaderNode_t*)node;
-(void)parseTextNode:(XmlReaderNode_t*)node;
-(BOOL)isWebviewScene;
-(BOOL)isInvitationScene;
-(BOOL)isQRCodeScene;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)init;
@end
