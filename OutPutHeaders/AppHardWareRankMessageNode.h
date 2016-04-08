/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "BaseMessageNodeView.h"

@class UIView, UIImageView;

@interface AppHardWareRankMessageNode : BaseMessageNodeView {
	UIView* m_oSeperationLineView;
	UIImageView* m_oArrowImageView;
}
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)onMoreOperate:(id)operate;
-(void)showOpearation;
-(void)onClick;
-(void)updateBkgImage:(BOOL)image;
-(void)onClearResource;
-(void)onDisappear;
-(void)updateStatus:(id)status;
-(void)layoutSubviewsInternal;
-(void)reLayoutSubviews;
-(CGSize)sizeForFrame:(CGRect)frame;
-(id)getBackgroundImageHL;
-(id)getBackgroundImage;
@end
