//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardTrendView.h"

@class UIButton, WBContentImageView, WBRoundedImageView;

@interface WBPageCardOlympicTrendView : WBPageCardTrendView
{
    UIButton *_actionButton;
    WBRoundedImageView *_avatarShadowView;
    WBContentImageView *_typeImageView;
}

+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) WBContentImageView *typeImageView; // @synthesize typeImageView=_typeImageView;
@property(retain, nonatomic) WBRoundedImageView *avatarShadowView; // @synthesize avatarShadowView=_avatarShadowView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)buttonBeClick;
- (void)setPageCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

