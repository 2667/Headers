//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMRangeSlider.h"

@class UIImage, UIImageView, UILabel;

@interface KSSingleThumbSlider : NMRangeSlider
{
    _Bool _needShowValue;
    _Bool _hasAjustImageLayer;
    UIImage *_leftImage;
    UILabel *_valueLabel;
    CDUnknownBlockType _formatWithDesimalValue;
    UIImageView *_leftImageView;
}

+ (struct CGSize)defaultThumbImageSize;
@property(nonatomic) _Bool hasAjustImageLayer; // @synthesize hasAjustImageLayer=_hasAjustImageLayer;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(copy, nonatomic) CDUnknownBlockType formatWithDesimalValue; // @synthesize formatWithDesimalValue=_formatWithDesimalValue;
@property(nonatomic) _Bool needShowValue; // @synthesize needShowValue=_needShowValue;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UIImage *leftImage; // @synthesize leftImage=_leftImage;
- (void).cxx_destruct;
- (void)alignValueLabelToPoint:(struct CGPoint)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)setTrackBackgroundImage:(id)arg1;
- (void)setTrackImage:(id)arg1;
- (void)setMinimumValue:(float)arg1;
@property(retain, nonatomic) UIImage *thumbImageHighlighted;
@property(retain, nonatomic) UIImage *thumbImageNormal;
@property(nonatomic) struct UIEdgeInsets touchEdgeInsets;
@property(readonly, nonatomic) struct CGPoint thumbCenter;
@property(nonatomic) float value;
- (id)findThumbView;
- (void)layoutSubviews;
- (void)setupTrackWithColor:(id)arg1 backgroundColor:(id)arg2;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
