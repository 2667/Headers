//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWETabbarTextView.h"

@class UIImageView;

@interface AWETabbarTextRefreshView : AWETabbarTextView
{
    UIImageView *_selectedImageView;
}

@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
- (void).cxx_destruct;
- (double)indicatorWidth;
- (_Bool)preferShowIndicator;
- (_Bool)canHandleRefresh;
- (struct CGRect)convertRect:(struct CGRect)arg1 usingScale:(double)arg2;
- (void)layoutSubviews;
- (void)tabbarStatusDidChanged:(long long)arg1 animated:(_Bool)arg2;
- (void)setupUI;

@end

