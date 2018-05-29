//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage, WBBadgeView, WBBottomToolBarItem;

@interface WBBottomToolBarItemView : UIButton
{
    WBBadgeView *badgeView;
    long long badgeViewHorizontalAlignment;
    _Bool _isUseCustom;
    long long _badgeViewHorizontalAlignment;
    UIImage *_badgeViewImage;
    WBBottomToolBarItem *_actionItem;
}

@property(retain, nonatomic) WBBottomToolBarItem *actionItem; // @synthesize actionItem=_actionItem;
@property(retain, nonatomic) UIImage *badgeViewImage; // @synthesize badgeViewImage=_badgeViewImage;
@property(nonatomic) long long badgeViewHorizontalAlignment; // @synthesize badgeViewHorizontalAlignment=_badgeViewHorizontalAlignment;
@property _Bool isUseCustom; // @synthesize isUseCustom=_isUseCustom;
- (void).cxx_destruct;
- (void)removeTarget;
- (void)dealloc;
- (id)statisticsCountStr:(long long)arg1;
- (void)sizeToFitCustom;
- (void)layoutSubviews;
- (void)buttonClicked:(id)arg1;
- (void)updateWithBottomToolBarItem:(id)arg1;
- (id)init;

@end

