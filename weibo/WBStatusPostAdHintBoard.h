//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBHintBoard.h"

@class WBAdModel, WBContentImageView;

@interface WBStatusPostAdHintBoard : WBHintBoard
{
    WBAdModel *statusPostAdModel;
    WBContentImageView *statusPostAdIconImageView;
}

@property(retain, nonatomic) WBAdModel *statusPostAdModel; // @synthesize statusPostAdModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)settingStatusPostAdModel:(id)arg1;
- (void)layoutSubviews;
- (void)resetHintLable:(id)arg1;
- (void)initHintLabel;
- (void)closeButtonPressed:(id)arg1;
- (void)initCloseButton;
- (void)initStatusPostAdIconImageView;
- (id)initWithFrame:(struct CGRect)arg1 dismissDirection:(int)arg2;
- (void)reloadUIElements;

@end

