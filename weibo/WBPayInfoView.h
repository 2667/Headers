//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface WBPayInfoView : UIView
{
    UILabel *_leftLabel;
    UILabel *_rightLabel;
}

@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
- (void).cxx_destruct;
- (void)setRightAttributeText:(id)arg1;
- (void)setRightFont:(id)arg1;
- (void)setLeftTextColor:(id)arg1;
- (void)setLeftFont:(id)arg1;
- (void)setRightText:(id)arg1;
- (void)setLeftText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

