//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class CAGradientLayer, NSString, SSThemedLabel;

@interface WDPostAnswerHeaderView : SSThemedView
{
    SSThemedLabel *_titleLabel;
    SSThemedView *_bottomLine;
    NSString *_title;
    CAGradientLayer *_bottomLineLayer;
}

@property(retain, nonatomic) CAGradientLayer *bottomLineLayer; // @synthesize bottomLineLayer=_bottomLineLayer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithQTitle:(id)arg1;

@end

