/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"

@class UIView, NSString;
@protocol WCBaseInfoItemDelegate;

@interface WCBaseInfoItem : MMObject {
	NSString* m_title;
	NSString* m_tip;
	NSString* m_key;
	UIView* m_view;
	UIView* m_superView;
	BOOL m_bEnable;
	BOOL m_bActive;
	id<WCBaseInfoItemDelegate> m_delegate;
}
@property(assign, nonatomic) BOOL m_bActive;
@property(readonly, assign, nonatomic) BOOL m_bEnable;
@property(retain, nonatomic) UIView* m_view;
@property(retain, nonatomic) NSString* m_key;
@property(retain, nonatomic) NSString* m_tip;
@property(retain, nonatomic) NSString* m_title;
-(void).cxx_destruct;
-(id)initWithTitle:(id)title tip:(id)tip key:(id)key;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(void)setEnable:(BOOL)enable;
-(id)getValue;
-(void)setDelegate:(id)delegate;
-(void)setSuperView:(id)view;
-(void)initView:(CGRect)view;
@end
