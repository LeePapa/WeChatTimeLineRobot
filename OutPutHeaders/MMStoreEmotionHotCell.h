/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "EmoticonStoreDownloadViewDelegate.h"

@class UIImageView, EmoticonStoreDownloadView, UILabel, UIView, NSString, MMWebImageView, EmoticonStoreItem;

@interface MMStoreEmotionHotCell : XXUnknownSuperclass <EmoticonStoreDownloadViewDelegate> {
	MMWebImageView* _emotionButton;
	UILabel* _emotionTitleLabel;
	EmoticonStoreItem* _item;
	UIView* _imageBackgroundView;
	int _type;
	int _scene;
	MMWebImageView* _tagImageView;
	UIImageView* _newImageView;
	EmoticonStoreDownloadView* _m_downloadView;
	int _cellType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int cellType;
@property(retain, nonatomic) EmoticonStoreDownloadView* m_downloadView;
-(void).cxx_destruct;
-(void)onDownloadFinished;
-(void)showFreeLabel;
-(void)setupLabel;
-(void)setupButton;
-(void)setupFrameView;
-(void)setupDownloadView;
-(void)loadTagImageView;
-(void)setupViews;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setSelected:(BOOL)selected;
-(void)setScene:(int)scene andType:(int)type;
-(void)setCellBackgroundColor:(id)color;
-(void)setBoardViewRecommendCellStyle;
-(void)setPersonalCellStyle;
-(void)hideFreeLabel;
-(void)setupEmotionStoreItem:(id)item delegate:(id)delegate Entrance:(unsigned long)entrance andType:(int)type;
-(void)setupLabelWithTitle:(id)title;
-(void)setupButtonImageURL:(id)url;
-(id)initWithFrame:(CGRect)frame;
@end

