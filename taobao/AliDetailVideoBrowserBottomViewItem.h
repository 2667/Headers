//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AliDetailVideoBrowserBottomViewItemModel, UIButton, UILabel;

@interface AliDetailVideoBrowserBottomViewItem : UIView
{
    AliDetailVideoBrowserBottomViewItemModel *_model;
    UIButton *_button;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) AliDetailVideoBrowserBottomViewItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)buildUI;
- (void)sendEvent:(id)arg1;
- (void)updateUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
