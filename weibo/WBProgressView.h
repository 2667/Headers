//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface WBProgressView : UIView
{
    double borderGap;
    float progress;
    UIColor *innerColor;
    UIColor *outerColor;
    UIColor *emptyColor;
}

@property(nonatomic) float progress; // @synthesize progress;
@property(retain, nonatomic) UIColor *emptyColor; // @synthesize emptyColor;
@property(retain, nonatomic) UIColor *outerColor; // @synthesize outerColor;
@property(retain, nonatomic) UIColor *innerColor; // @synthesize innerColor;
@property(nonatomic) double borderGap; // @synthesize borderGap;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawInsideRoundedRectangleWithContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 radius:(double)arg3;
- (void)drawEmptyRoundedRectangleWithContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 radius:(double)arg3;
- (void)drawOutterRoundedRectangleWithContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 radius:(double)arg3;
- (void)setArcPathWithContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 radius:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

