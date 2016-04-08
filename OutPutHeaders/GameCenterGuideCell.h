/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMTableViewCell.h"

@class GameCenterGuideItem, MMWebImageView, UIButton, UILabel;

@interface GameCenterGuideCell : MMTableViewCell {
	MMWebImageView* _iconView;
	UIButton* _typeButton;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	GameCenterGuideItem* _guideItem;
}
@property(retain, nonatomic) GameCenterGuideItem* guideItem;
-(void).cxx_destruct;
-(void)layoutContent;
-(void)reloadData;
-(void)initializeSubview;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
