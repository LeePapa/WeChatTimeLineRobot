/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface ShakeCardData : MMObject {
	BOOL haveEgg;
	unsigned long resultType;
	NSString* viewTitle;
	NSString* viewSubTitle;
	NSString* viewDesc;
	NSString* cardTpId;
	NSString* cardExt;
	NSString* cardSubTitle;
	NSString* brandName;
	NSString* logoUrl;
	NSString* auxTitle;
	NSString* bkgColor;
	NSString* shareUrl;
	NSString* shareIconUrl;
	NSString* shareTitle;
	NSString* shareDesc;
	NSString* shareBtnTitle;
	NSString* tryAgainTipWording;
	NSString* acceptCardBtnTitle;
	unsigned long flowControlFlag;
	unsigned long flowControlLevel;
	unsigned long cardEndTime;
	NSString* _cardTitle;
}
@property(assign, nonatomic) BOOL haveEgg;
@property(assign, nonatomic) unsigned long cardEndTime;
@property(assign, nonatomic) unsigned long flowControlFlag;
@property(assign, nonatomic) unsigned long flowControlLevel;
@property(retain, nonatomic) NSString* acceptCardBtnTitle;
@property(retain, nonatomic) NSString* tryAgainTipWording;
@property(retain, nonatomic) NSString* shareBtnTitle;
@property(retain, nonatomic) NSString* shareDesc;
@property(retain, nonatomic) NSString* shareTitle;
@property(retain, nonatomic) NSString* shareIconUrl;
@property(retain, nonatomic) NSString* shareUrl;
@property(retain, nonatomic) NSString* bkgColor;
@property(retain, nonatomic) NSString* auxTitle;
@property(retain, nonatomic) NSString* logoUrl;
@property(retain, nonatomic) NSString* brandName;
@property(retain, nonatomic) NSString* cardSubTitle;
@property(retain, nonatomic) NSString* cardTitle;
@property(retain, nonatomic) NSString* cardExt;
@property(retain, nonatomic) NSString* cardTpId;
@property(retain, nonatomic) NSString* viewDesc;
@property(retain, nonatomic) NSString* viewSubTitle;
@property(retain, nonatomic) NSString* viewTitle;
@property(assign, nonatomic) unsigned long resultType;
-(void).cxx_destruct;
@end

