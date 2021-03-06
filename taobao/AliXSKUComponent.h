//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailSKUComponent, UILabel, UITapGestureRecognizer;

@interface AliXSKUComponent : AliDetailComponent
{
    UILabel *_mainTitleLabel;
    AliDetailSKUComponent *_skuComponent;
    UILabel *_rightTipLabel;
    UITapGestureRecognizer *_tap;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UILabel *rightTipLabel; // @synthesize rightTipLabel=_rightTipLabel;
@property(retain, nonatomic) AliDetailSKUComponent *skuComponent; // @synthesize skuComponent=_skuComponent;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
- (void).cxx_destruct;
- (void)popSKUBtnClick:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

