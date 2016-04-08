/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class NSMutableDictionary;
@protocol WCRedEnvelopesNetworkHelperDelegate;

@interface WCRedEnvelopesNetworkHelper : MMObject <PBMessageObserverDelegate> {
	id<WCRedEnvelopesNetworkHelperDelegate> m_delegate;
	NSMutableDictionary* m_dicCGIStartedTime;
}
@property(assign, nonatomic) __weak id<WCRedEnvelopesNetworkHelperDelegate> m_delegate;
+(void)idkeyCmdReport:(unsigned long)report keyName:(id)name value:(unsigned long)value;
+(void)idkeyCmdReport:(unsigned long)report keyName:(id)name;
+(void)initialize;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)MessageReturnOnAsyncBizSubScribe:(id)scribe Event:(unsigned long)event;
-(void)MessageReturnOnCommonBizHongbao:(id)hongbao Event:(unsigned long)event;
-(void)MessageReturnOnEnterpriseHongbao:(id)hongbao Event:(unsigned long)event;
-(void)MessageReturnOnHongbao:(id)hongbao Event:(unsigned long)event;
-(void)WCToAsyncBizSubcribeReq:(id)asyncBizSubcribeReq;
-(void)WCToEnterpriseCommonBizReq:(id)enterpriseCommonBizReq;
-(void)WCToEnterpriseHBBizReq:(id)enterpriseHBBizReq;
-(void)WCToYearHongbaoRequest:(id)yearHongbaoRequest;
-(void)WCToHongbaoCommonRequest:(id)hongbaoCommonRequest;
-(void)dealloc;
-(id)init;
@end
